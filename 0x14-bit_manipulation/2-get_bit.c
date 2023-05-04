#include "main.h"


/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index of the bit
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	if (n & (mask << index))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
