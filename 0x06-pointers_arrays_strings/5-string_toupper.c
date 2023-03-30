#include "main.h"

/**
  * string_toupper - changes all lowercase letters of a string to uppercase
  * @c: the string to be processed
  * Return: pointer to the processed string
  */
char *string_toupper(char *c)
{
	int i, strlen;

	strlen = 0;

	while (c[strlen])
	{
		strlen++;
	}

	for (i = 0; i < strlen; i++)
	{
		if (c[i] > 96 && c[i] < 123)
		{
			c[i] = c[i] - 32;
		}
	}
	return (c);
}
