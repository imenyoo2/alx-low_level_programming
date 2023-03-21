
/**
 * _isalpha - check if c is alphabet (lowercase or uppercase)
 * @c: the ASCII code of the character to be checked
 * Return: 1 if true, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
