#include "main.h"

/**
  *_memcpy - copies memory area
  * @dest: the destination memory area
  * @src: the src memory area where the bytes to be copied are takem from
  * @n: the number of bytes to be copied
  *
  * Return: the pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
