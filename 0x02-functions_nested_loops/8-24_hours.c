#include "main.h"

/**
 * jack_bauer - prints every minute of the day of jack bauer.
 * Takes no argument values.
 * Return: no return value specified.
 */

void jack_bauer(void)
{
	int hours = 0;
	int min = 0;

	while (hours < 24)
	{
		while (min < 60)
		{

			_putchar('0' + (hours / 10));
			_putchar('0' + (hours % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');
			min++
		}
		min = o;
		hours++;
	}
}