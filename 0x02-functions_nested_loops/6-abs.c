#include "main.h"

/**
 * _abs - calculate the absolute value of n
 * @n: the number to be evaluated its abs value
 * Return: abs value
 */
int _abs(int n)
{
	if (!n)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
