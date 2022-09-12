#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible different combinations of three digits,
 * Separated by comma and space
 * digits must be different
 * print smallest combo,
 * all three digits printed in ascending order,
 * using only putchar function six times max.
 * Return: value of 0 on success.
 *
 *
 */

int main(void)
{
	int d1, d2, d3;

	for (d1 = 48; d1 < 57; d1++)
	{
	for (d2 = d1 + 1; d2 <= 57; d2++)
	for (d3 = d2 + 1; d3 <= 57; d3++)
		{
		putchar(d1);
		putchar(d2);
		putchar(d3);
	if (d1 == 55 && d2 == 56 && d3 == 57)
	continue;
																							putchar(44);
																							putchar(32);
																							}
	}
	putchar(10);
	return (0);
}
