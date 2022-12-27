#include "main.h"

/**
 * print_last_digit - print last digit of a num.
 * @x: integer to be worked on.
 * Return: Value of the last digit.
 */
int print_last_digit(int x)
{
	if (n < 0)
		x *= -1;
	_putchar('0' + (x % 10));

	return (x % 10);
