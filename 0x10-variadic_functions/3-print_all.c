#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - prints anything
 * @format: type of arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 1;
	char *buffer;

	va_start(ap, format);
	while (*(format + i) != '\0')
	{
		switch (*(format + i - 1))
		{
			case 'c':
				printf("%c, ", va_arg(ap, int));
				break;
			case 'i':
				printf("%d, ", va_arg(ap, int));
				break;
			case 'f':
				printf("%f, ", va_arg(ap, double));
				break;
			case 's':
				buffer = va_arg(ap, char *);
				printf("%s, ", buffer != NULL ? buffer : "(nil)");
				break;
		}
		i++;
	}
	/* handling last arg */
	switch (*(format + i - 1))
	{
		case 'c':
			printf("%c\n", va_arg(ap, int));
			break;
		case 'i':
			printf("%d\n", va_arg(ap, int));
			break;
		case 'f':
			printf("%f\n", va_arg(ap, double));
			break;
		case 's':
			buffer = va_arg(ap, char *);
			printf("%s\n", buffer != NULL ? buffer : "(nil)");
			break;
	}
	va_end(ap);
}
