/**
 * cap_string - capitalizes all words of a string
 * @str: the string
 * Return: pointer to the result
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int diff = 'a' - 'A';

	while (*ptr != '\0')
	{
		if (*ptr > 'a' && *ptr < 'z')
		{
			switch (*(ptr - 1))
			{
				case ',':
				case ';':
				case '.':
				case '!':
				case '?':
				case '"':
				case '(':
				case ')':
				case '{':
				case '}':
				case ' ':
				case '\t':
				case '\n':
					*ptr -= diff;
			}
		}
		ptr++;
	}
	return (str);
}
