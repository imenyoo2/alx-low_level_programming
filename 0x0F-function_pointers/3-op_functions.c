#include "3-calc.h"

/**
 * op_add - performs addition on a and b
 * @a: num1
 * @b: num2
 * Return: result of operation
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - performs subtraction on a and b
 * @a: num1
 * @b: num2
 * Return: result of operation
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - performs multiplication on a and b
 * @a: num1
 * @b: num2
 * Return: result of operation
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - performs division on a and b
 * @a: num1
 * @b: num2
 * Return: result of operation
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - performs modulo on a and b
 * @a: num1
 * @b: num2
 * Return: result of operation
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a % b);
}
