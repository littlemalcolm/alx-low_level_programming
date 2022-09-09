#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: program to print the last digit of a variable n
 * Return: 0 on success.
 */
int main(void)
{
	int n;
	int l_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_digit = n % 10;

	if (l_digits > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, l_digits);
	if (l_digits == 0)
		printf("Last digit of %d is %d and is 0\n", n, l_digits);
	if (l_digits < 6 && l_digits != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l_digit);

	return (0);
}
