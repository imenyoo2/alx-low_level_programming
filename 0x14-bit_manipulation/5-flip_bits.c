#include "main.h"



/**
 * flip_bits - evaluats the number of bits you would need to flip to get
 *             from one number to another
 * @n: main number
 * @m: desired number
 * Return: number of bits to be fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int result = 0, mask = 1;

	while (n != 0 || m != 0)
	{
		if ((n & mask) != (m & mask))
		{
			result++;
		}
		n >>= 1;
		m >>= 1;
	}
	return (result);
}
