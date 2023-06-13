#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * create_array - create array of chars and initialize with a specific char
  * @size: size of array
  * @c: fill array values with this char
  * Return: pointer to array
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *bee;

	if (size == 0)
		return (NULL);
	bee = (char *)malloc(sizeof(char) * size);
	if (bee == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		bee[i] = c;
	bee[i] = 0;
	return (bee);



}
