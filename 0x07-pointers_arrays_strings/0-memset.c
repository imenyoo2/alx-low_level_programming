/**
 * _memset - fills first n memory addresses with a constant byte.
 * @s: the head of memory to be filled
 * @b: the constant byte
 * @n: the number of memory addresses
 * Return: pointer to the new s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
