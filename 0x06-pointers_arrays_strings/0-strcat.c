
/**
 * _strcat - appends the src string to the dest string
 * @dest: the dest string (will be modified)
 * @src: the src string (to be appended to dest)
 * Return: pointer to the result
 */
char *_strcat(char *dest, char *src)
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
				dest[i] = src[j];
				if (src[j] == '\0')
				{
					break;
				}
				j++;
				i++;
			}
			break;
		}
	}
	return (dest);
}
