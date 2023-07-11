#include "main.h"

/**
  * _strcat - concatenates two strings
  * @dest: the destination string. It should be large enough for both strings
  * @src: the source string to be concatenated at the end of dest
  * Description:the function overwrites the null byte \0 at the end of dest and
  * adds a terminating null byte at the end of the final string
  *
  * Return: pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
	int i, b, ldest, lsrc, ltotal;

	ldest = 0;
	lsrc = 0;
	b = 0;

	while (dest[ldest])
	{
		ldest++;
	}
	while (src[lsrc])
	{
		lsrc++;
	}
	ltotal = lsrc + ldest;
	for (i = ldest; i < ltotal; i++)
	{
		dest[i] = src[b];
		b++;
	}
	dest[i] = '\0';
	return (dest);
}
