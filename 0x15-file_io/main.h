#ifndef MAIN_H
#define MAIN_H
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);


/**
 * struct elf_data - holds the data needed
 * @Magic: the magic number
 * @Class: class number
 * @Data: data number
 * @Version: Version number
 * @OS_ABI: OS_ABI number
 * @Type: Type number
 * @EntryAdrr: Entry Address
 * @ABI_Version: ABI_Version Address
 */
typedef struct elf_data
{
	unsigned int Magic[4];
	unsigned int Class;
	unsigned int Data;
	unsigned int Version;
	unsigned int OS_ABI;
	unsigned int ABI_Version;
	unsigned int Type;
	unsigned int EntryAdrr;
} elf;
#endif
