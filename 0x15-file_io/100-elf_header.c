#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <elf.h>
#include "main.h"



void printHeaderFromMagic(elf *elf_data);
void printType(unsigned int type);
void printOS_ABI(unsigned int os);
void parseElfStruct(elf *elf_data, char *buffer);
void checkELF(char *buffer);

/**
 * main - entry point
 * @argc: number of args passed
 * @argv: array of args
 * Return: alwayse 0
 */
int main(int argc, char **argv)
{
	int fd;
	char buffer[1024];
	elf elf_data;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "provided file is not ELF file\n");
		exit(98);
	}
	lseek(fd, 0, SEEK_SET);
	if (read(fd, buffer, 1024) == -1)
	{
		dprintf(STDERR_FILENO, "provided file is not ELF file\n");
		exit(98);
	}
	checkELF(buffer);
	parseElfStruct(&elf_data, buffer);
	printHeaderFromMagic(&elf_data);
	close(fd);
	return (0);
}

/**
 * printHeaderFromMagic - prints the header info based on elf_data
 * @elf_data: elf struct
 * Return: void
 */
void printHeaderFromMagic(elf *elf_data)
{
	/* TODO: fill other fields */
	/* printing Class */
	printf("  Class:                             %s\n",
					elf_data->Class == 2 ? "ELF64" : "ELF32");
	/* printing Data */
	printf("  Data:                              2's complement, %s\n",
																							elf_data->Data == 1 ? "little endian" : "big endian");
	/* printing Version */
	printf("  Version:                           %s\n",
			elf_data->Version == 1 ? "1 (current)" : "0 (invalid)");
	/* printing OS/ABI */
	printOS_ABI(elf_data->OS_ABI);
	/* printing ABI Version */
	printf("  ABI Version:                       %d\n", elf_data->ABI_Version);
	printType(elf_data->Type);
	/* printing Entry point */
	printf("  Entry point address:               0x%x\n", elf_data->EntryAdrr);

}

/**
 * printOS_ABI - prints OS_ABI field
 * @os: OS_ABI number
 * Return: void
 */
void printOS_ABI(unsigned int os)
{
	switch (os)
	{
		case 0:
			printf("  OS/ABI:                            %s\n", "UNIX - System V");
			break;
		case 2:
			printf("  OS/ABI:                            %s\n", "UNIX - NetBSD");
			break;
		case 6:
			printf("  OS/ABI:                            %s\n", "UNIX - Solaris");
			break;
		default:
			printf("  OS/ABI:                            <unknown: %d>", os);
	}
}

/**
 * printType - print type field
 * @type: type number
 * Return: void
 */
void printType(unsigned int type)
{
	/*
	 * EXEC (Executable file)
	 * DYN (Shared object file)
	 */
	switch (type)
	{
		case 2:
			printf("  Type:                              %s\n",
					"EXEC (Executable file)");
			break;
		case 3:
			printf("  Type:                              %s\n",
					"DYN (Shared object file)");
			break;
	}
}

/**
 * parseElfStruct - parses data read to elf_data struct
 * @elf_data: elf struct
 * @buffer: data to be parsed
 * Return: void
 */
void parseElfStruct(elf *elf_data, char *buffer)
{
	/* it's better to print magic here */
	printf("ELF Header:\n  Magic:   %02x %02x %02x %02x %02x %02x ",
				buffer[0], buffer[1], buffer[2], buffer[3], buffer[4],
				buffer[5]);
	printf("%02x %02x %02x %02x %02x %02x %02x %02x %02x %02x\n",
				buffer[6], buffer[7], buffer[8], buffer[9],
				buffer[10], buffer[11], buffer[12], buffer[13], buffer[14],
				buffer[15]);
	/* parsing magic */
	elf_data->Magic[0] = buffer[0];
	elf_data->Magic[1] = buffer[1];
	elf_data->Magic[2] = buffer[2];
	elf_data->Magic[3] = buffer[3];
	elf_data->Class = buffer[4];
	elf_data->Data = buffer[5];
	elf_data->Version = buffer[6];
	elf_data->OS_ABI = buffer[7];
	elf_data->ABI_Version = buffer[8];
	elf_data->Type = buffer[16];
	/* TODO: fix this */
	elf_data->EntryAdrr = *((unsigned int *) (buffer + 24));
#if 0
	elf_data->EntryAdrr = buffer[23];
	printf("%x\n", elf_data->EntryAdrr);
	elf_data->EntryAdrr >>= 8;
	elf_data->EntryAdrr += buffer[22];
	printf("%x\n", elf_data->EntryAdrr);
	elf_data->EntryAdrr >>= 8;
	elf_data->EntryAdrr += buffer[25];
	printf("%x\n", elf_data->EntryAdrr);
	elf_data->EntryAdrr >>= 8;
	elf_data->EntryAdrr += buffer[24];
	printf("%x\n", elf_data->EntryAdrr);
#endif
}

/**
 * checkELF - checks if the file is an ELF file and quite if not
 * @buffer: content of the file
 * Return: void
 */
void checkELF(char *buffer)
{
	if (buffer[0] != 0x7f ||
			buffer[1] != 0x45 ||
			buffer[2] != 0x4c ||
			buffer[3] != 0x46)
	{
		dprintf(STDERR_FILENO, "provided file is not ELF file\n");
		exit(98);
	}
}

/*
 * infos needed to be encoded:
 * - Magic [x]
 * - Class [x]
 * - Data [x] -> 01 = little endian; 02 = big endian
 * - Version [x] -> current if 01; undefined if 02 (here is alwayse current)
 * - OS/ABI [x]
 * - ABI Version [x]
 * - Type [x] 17 offset
 * - Entry point address [ ]
 */
