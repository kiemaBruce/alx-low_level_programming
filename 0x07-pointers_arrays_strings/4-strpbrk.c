#include "main.h"

/**
  * _strpbrk - searches a string for any of a set of bytes
  * @s: the string to be searched
  * @accept: the set of characters whose presence is to be
  * searched for in s
  * Return: pointer to the first byte in s that matches
  * one of the bytes in accept, or NULL if no such byte
  * is found
  */
char *_strpbrk(char *s, char *accept)
{
	int i, j, slen, aclen;
	char *p;

	slen = 0;
	aclen = 0;
	p = 0;

	while (s[slen])
	{
		slen++;
	}
	while (accept[aclen])
	{
		aclen++;
	}
	for (i = 0; i < slen; i++)
	{
		for (j = 0; j < aclen; j++)
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				return (p);
			}
		}
	}
	return (p);
}
