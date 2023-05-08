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
	size_t result;

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

	if (write(1, buffer, letters) == -1)
	{
		return (0);
	}
	free(buffer);
	if (close(fd) == -1)
	{
		return (0);
	}
	return (result);
}
