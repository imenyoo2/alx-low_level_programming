#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of str args
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *buffer;

	if (separator == NULL)
	{
		separator = "";
	}
	if (n >= 1)
	{
		va_start(ap, n);
		printf("%s", va_arg(ap, char *));
		for (i = 1; i < n; i++)
		{
			buffer = va_arg(ap, char *);
			printf("%s%s", separator, (buffer == NULL?"(nil)":buffer));
		}
		va_end(ap);
	}
	printf("\n");
}
