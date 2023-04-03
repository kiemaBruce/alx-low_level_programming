#include "main.h"

/**
  * _memset - fills memory with a constant byte
  * @s: pointer to the memory area to be filled
  * @b: the constant byte that is to fill the memory area
  * @n: the first n bytes of s to be filled
  * Return: pointer to the memory area s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
