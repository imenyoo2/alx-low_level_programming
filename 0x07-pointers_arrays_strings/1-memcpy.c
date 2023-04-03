/**
 * _memcpy - copies memory area
 * @dest: the destination
 * @src: the source
 * @n: the number of addresses to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
