#include "main.h"

/**
  * _strlen - returns the length of a string
  * @s: the string whose length is to be determined
  *Return: the string length, exluding the trailing \0
  */
int _strlen(char *s)
{
	int size, i;

	size = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		size++;
	}
	return (size);
}
