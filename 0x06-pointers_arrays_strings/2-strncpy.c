/**
 * _strncpy - copies a string
 * @dest: the destenation
 * @src: the source
 * @n: the number of bytes to be copied
 * Return: pointer to the result
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
