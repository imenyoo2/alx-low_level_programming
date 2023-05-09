#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

int copy(int from, int to);

/**
 * main - entry point
 * @argc: number of args
 * @argv: array of arguments
 * Return: alwayse 0
 */
int main(int argc, char **argv)
{
	int file_from, file_to;
	int check;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (file_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	check = copy(file_from, file_to);
	if (check == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	} else if (check == 1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(file_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_from);
		exit(100);
	} else if (close (file_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}

/**
 * copy - copies file from to file to
 * @from: already opened file
 * @to: already opened file
 * Return: -1 for writing error, 1 for reading error, otherwise 0
 */
int copy(int from, int to)
{
	char readbuff[1024];
	int Wbytes = 0;
	int Rbytes = 0;

	while ((Rbytes = read(from, readbuff, 1024)) > 0)
	{
		while (Rbytes > 0)
		{
			Wbytes = write(to, readbuff + Wbytes, Rbytes);
			if (Wbytes == -1)
			{
				return (-1);
			}
			Rbytes -= Wbytes;
		}
		Wbytes = 0;
	}
	if (Rbytes == -1)
	{
		return (1);
	}
	return (0);
}
