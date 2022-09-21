#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * reset_to_98 - takes a pointer to an int as parameter and updates the value.
 * @c: argument to be checked.
 *
 * Description: Updates the value it points to to 98.
 * Return: Unspecified reurn value.
 */
void reset_to_98(int *n)
{
	*n = 98;
}
