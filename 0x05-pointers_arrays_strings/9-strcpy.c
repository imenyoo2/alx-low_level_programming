/**
 * _strcpy - copies the string pointed to by src, to dest
 * @dest: the buffer
 * @src: the source string
 * Return: the pointer of the buffer
 */
char *_strcpy(char *dest, char *src)
{
	char *buffer = dest;

	while (1)
	{
		if (*src == '\0')
		{
			*dest = '\0';
			return (buffer);
		}
		*dest = *src;
		src++;
		dest++;
	}
}
