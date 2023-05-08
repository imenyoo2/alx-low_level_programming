#include "main.h"


/**
 * append_text_to_file - appends text at the end of a file
 * @filename: path name of the file
 * @text_content: content to be appended
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len, bytesWritten = 0;

	if (text_content == NULL)
	{
		return (1);
	}
	len = strlen(text_content);
	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	while (len > 0)
	{
		bytesWritten = write(fd, text_content, len);
		if (bytesWritten == -1)
		{
			return (-1);
		}
		len -= bytesWritten;
	}
	if (close(fd) == -1)
	{
		return (-1);
	}
	return (1);
}
