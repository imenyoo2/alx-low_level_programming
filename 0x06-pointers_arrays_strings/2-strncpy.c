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
	int check = 0;

	for (i = 0; i < n; i++)
	{
		if (check)
		{
			dest[i] = 0;
		}
		else if (src[i] == '\0')
		{
			check = 1;
		}
		else
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
