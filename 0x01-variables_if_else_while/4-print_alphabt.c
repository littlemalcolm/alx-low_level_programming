#include <stdio.h>

/**
 * main - entry point of program
 * no arguments
 *
 * Description: prints all lowercase alphabet except q and e
 * Return: 0 on success
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++) /* lowercase alpha in ascii */
		putchar(i);
	for (i = 65; i < 91; i++) /* uppercase alpha in ascii */
		putchar(i);
	putchar(10); /* newline ascii */
	return (0);
}
