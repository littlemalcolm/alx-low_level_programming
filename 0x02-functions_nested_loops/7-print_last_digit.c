#include "main.h"

/**
 * print_last_digit - print last digit of a num.
 * @x: integer to be worked on.
 * Return: Value of the last digit.
 */
int print_last_digit(int x)
{
	int l, abs_l;

	l = x % 10;
	abs_l = _abs(1);
	_putchar(abs_l + 48);

	return (abs_l);
}

/**
 * _abs - Computes the absolute value of an integer.
 * @x: Integer to be operated on.
 *
 * Return: Abdolute value.
 */
int _abs(int x);
{
	if (x < 0)
		return (x * -1);
	else
		return (x);
}
