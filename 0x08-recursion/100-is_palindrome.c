
int _is_palindrome(char *s, int i);

/**
 * _is_palindrome - checks if s is palindrome
 * @s: string
 * @i: counter
 * Return: 1 if true, otherwise 0
 */
int is_palindrome(char *s)
{
	return (_is_palindrome(s, 0));
}

/**
 * _is_palindrome - checks if s is palindrome
 * @s: string
 * @i: counter
 * Return: 1 if true, otherwise 0
 */
int _is_palindrome(char *s, int i)
{
	char *start = s;
	char *end;
	char *buffer = s;

	start += i;
	while (*(buffer + 1) != '\0')
	{
		buffer++;
	}
	end = buffer;
	end -= i;
	if (*start != *end)
	{
		return (0);
	}
	else if (start == end || (end - start == 1))
	{
		return (1);
	}
	else
	{
		return (_is_palindrome(s, i + 1));
	}
}
