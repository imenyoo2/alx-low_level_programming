#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: first parameter
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;
	va_list ap;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(ap, int);
		}
		va_end(ap);
		return (sum);
	}
}
