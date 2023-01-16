#include "main.h"

/**
 * jack_bauer - print every minute of the day of jack bauer.
 * Description: prints minutes 00:00 to 23:59
 */

void Jack_bauer(void)
{
	int hours = 0;
	int min = 0;

	while (min < 24)
	{
		while (min < 60)
		{

			_putchar('0' + (hours / 10));
			_putchar('0' + (hours % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			 putchar('\n');
			min++
		}
		min = o;
		hours++;
	}
}
