#include "main.h"

/**
  * _strdup - Allocates space in memory, fills with the copy of a given string.
  * @str: String for which copy should be used to fill allocated memory.
  *
  * Return: Returns pointer to duplicate string, NULL if insufficient memory,
  * NULL if str=NULL.
  */
char *_strdup(char *str)
{
	char *duplicate_str;
	int i = 0, len = 0;

	if (str == NULL) /* validate str input */
		return (NULL);

	while (*(str + i))
		len++, i++;
	len++; /* add null terminator to length */

	duplicate_str = malloc(sizeof(char) * len); /* allocate memory */

	if (duplicate_str == NULL) /* validate memory */
		return (NULL);

	i = 0;
	while (i < len)
	{
		*(duplicate_str + i) = *(str + i);
		i++;
	}

	return (duplicate_str);
}
