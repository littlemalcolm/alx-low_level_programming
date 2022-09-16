#include "main.h"

/**
 * _isupper - Checks for upper case alphabet.
 * @c: argument to be checked.
 *
 * Return: 1 if upper, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
