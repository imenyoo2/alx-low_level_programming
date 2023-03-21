#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - prints the last digit of n
 * @n: an integer
 * Return: single digit int
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	last = _abs(last);
	_putchar('0' + last);
	return (last);
}
