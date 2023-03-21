/**
 * _islower - check if c is a lower case char
 * @c: the ASCII code of the character
 * Return: 1 if true otherwise 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
