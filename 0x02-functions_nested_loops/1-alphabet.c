#include "main.h"

/**
* print_alphabet - print lowercase alphabet
* Takes no argument values.
*
* Return: no specified return value.
*/
void print_alphabet(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')

	{
		_putchar(alpha);
		alpha++;
	}
		_putchar('\n');
}
