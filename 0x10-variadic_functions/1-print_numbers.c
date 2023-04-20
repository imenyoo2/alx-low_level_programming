#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n >= 1)
	{
		va_start(ap, n);
		printf("%d", va_arg(ap, int));
		for (i = 1; i < n; i++)
		{
			if (separator != NULL)
				printf("%s%d", separator, va_arg(ap, int));
			else
				printf("%d", va_arg(ap, int));
		}
		va_end(ap);
	}
	printf("\n");
}
