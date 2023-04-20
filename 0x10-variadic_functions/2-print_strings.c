#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

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
	char **array = malloc(n * sizeof(char *));

	if (separator == NULL)
	{
		separator = "";
	}
	if (n >= 1)
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			array[i] = va_arg(ap, char *);
			if (array[i] == NULL)
			{
				printf("(nil)\n");
				return;
			}
		}
		printf("%s", array[0]);
		for (i = 1; i < n; i++)
		{
			printf("%s%s", separator, array[i]);
		}
		free(array);
		va_end(ap);
	}
	printf("\n");
}
