/**
 * _strncat - similar to _strcat but use the most n bytes from src
 * @dest: the dest string (will be modified)
 * @src: the src string (to be appended to dest)
 * @n: the number of bytes to be appended
 * Return: pointer to the result
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (1)
	{
		if (dest[i] != '\0')
		{
			i++;
		}
		else
		{
			while (1)
			{
				if (n == 0)
				{
					break;
				}
				dest[i] = src[j];
				if (src[j] == '\0')
				{
					break;
				}
				j++;
				i++;
				n--;
			}
			break;
		}
	}
	return (dest);

}
