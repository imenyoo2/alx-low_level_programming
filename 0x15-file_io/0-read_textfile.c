#include "main.h"


/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the file to be read
 * @letters: number of chars to be read
 * Return: the number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t result;
	ssize_t result2;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	buffer = (char *) malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		return (0);
	}
	result = read(fd, buffer, letters);
	if (result == -1 || result == 0)
	{
		return (0);
	}

	result2 = write(1, buffer, result);
	if (result2 == -1)
	{
		return (0);
	}
	free(buffer);
	close(fd);
	return (result2);
}
