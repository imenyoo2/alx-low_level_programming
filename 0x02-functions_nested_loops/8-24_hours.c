#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: void
 */
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			if (hour < 10)
			{
				_putchar('0');
				_putchar(hour + '0');
				_putchar(':');
			}
			else
			{
				_putchar((hour - (hour % 10)) / 10 + '0');
				_putchar((hour % 10) + '0');
				_putchar(':');
			}
			if (minute < 10)
			{
				_putchar('0');
				_putchar(minute + '0');
				_putchar('\n');
			}
			else
			{
				_putchar((minute - (minute % 10)) / 10 + '0');
				_putchar((minute % 10) + '0');
				_putchar('\n');
			}
		}
	}
}
