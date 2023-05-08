#include "main.h"


/**
 * create_file - creates a file
 * @filename: path name of the file
 * @text_content: content of the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;

	while (*(text_content + len) != '\0')
	{
		len++;
	}

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}
	else if (write(fd, text_content, len) == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
