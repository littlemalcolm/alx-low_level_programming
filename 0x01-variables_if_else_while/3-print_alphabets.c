#include <stdio.h>

/**
 * main - entry point.
 *
 * Desscription: prints lowercase and then uppercase alphabets,
 * followed by a new line
 * Return: Always 0 on success.
 */
int main(void)
{
	int i;

	i = 97;
	while (i <= 122)
	{
		putchar(i);
		1++;
	}
	i = 65;
	while (i <= 90)
	{
		putchar(i);
		i++;
	}
	putchar (10);
	return (0);
}
