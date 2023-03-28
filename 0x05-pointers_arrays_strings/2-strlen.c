
/**
 * _strlen - return the length of the string s
 * @s: the pointer to the first head of the string
 * Return: the length
 */
int _strlen(char *s)
{
	int length = 0;
	char *count = s;

	while (*count != '\0')
	{
		length++;
		count++;
	}
	return (length);
}
