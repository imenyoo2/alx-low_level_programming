#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: string
 * Return: int
 */
int _atoi(char *s)
{
	int length = _strlen(s);
	char *end = s + length - 1;
	int result = 0;
	int sign = 0;
	int tens = 0;
	int i;
	int add;
	int reset = 0;

	while (1)
	{
		if (*end == '+')
		{
			sign++;
		}
		else if (*end == '-')
		{
			sign--;
		}
		else if (*end >= '0' && *end <= '9')
		{
			if (reset)
			{
				result = 0;
				reset = 0;
				tens = 0;
			}
			add = (*end - '0');
			for (i = 0; i < tens; i++)
			{
				add *= 10;
			}
			result += add;
			tens++;
		}
		else
		{
			if (result != 0)
				reset = 1;
		}
		if (end == s)
		{
			if (sign < 0)
				return (-result);
			else
				return (result);
		}
		end--;
	}
}

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
