#include "main.h"

/**
  * _strcat - Concatenatesmtwo strings.
  * @dest: Pointer to first argument of char type.
  * @scr: Pointer to second argument of charntype.
  * 
  * Return: Returns pointer to the resulting string in dest.
  */
char *_strcat(char *dest, char *str)
{
	int c, d;

	d = 0;
	for (c = 0; 1; c++)
	{
		if (dest[c] == 0)
		{
			while (1)
			{
				dest[c] = src[d];
				if (src[d] == 0)
					break;
				c++
				d++
			}
			break;
		}
	}
	return (dest);
}
