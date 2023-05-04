#include "main.h"



/**
 * clear_bit - clears bit in index
 * @n: pointer to int
 * @index: index of bit to be cleared
 * Return: 1 if suceeded, otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	mask <<= index;
	if (*n & mask)
	{
		*n ^= mask;
	}
	return (1);
}
