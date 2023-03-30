#include "main.h"
/**
  * _strncat - concatenates two strings
  * @dest: the destination string to whch src will be concatenated
  * @src: the string to be appended to the end of dest
  * @n: the number of elements of src to be concatenated to dest
  * Description: concatenates two strings, but only up to the nth character of
  * srcA. Adds a \0 after concatenating
  *
  *Return: pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int ldest, lsrc, b;

	ldest = 0;
	lsrc = 0;

	while (dest[ldest])
	{
		ldest++;
	}
	while (src[lsrc])
	{
		lsrc++;
	}
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[ldest + b] = src[b];
	}
	dest[ldest + b] = '\0';
	return (dest);
}
