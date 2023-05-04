#include "main.h"


/**
 * set_bit - sets the bit at index
 * @n: pointer to int
 * @index: index of bit to be set
 * Return: 1 if suceeded, otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	mask <<= index;
	*n |= mask;
	return (1);
}
