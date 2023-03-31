
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: the string to be changed
 * Return: pointer to the result
 */
char *string_toupper(char *str)
{
	char diff = 'a' - 'A';
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr > 'a' && *ptr < 'z')
		{
			*ptr -= diff;
		}
		ptr++;
	}
	return (str);
}
