#include "main.h"


/**
 * binary_to_uint - convert a binary number to unsigned int
 * @b: string consiste of 0 and 1
 * Return: the converted value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int buffer = 0, mask = 1;
	int size = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*(b + size) != '\0')
	{
		size++;
	}
	size--;
	while (size >= 0)
	{
		if (*(b + size) != '0' && *(b + size) != '1')
		{
			return (0);
		}
		if (*(b + size) == '1')
		{
			buffer |= mask;
		}
		mask <<= 1;
		size--;
	}
	return (buffer);
}
