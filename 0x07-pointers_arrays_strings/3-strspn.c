#include "main.h"
#include <stdio.h>

/**
  * _strspn - gets the length of a prefix substring.
  * @s: the string to be checked for prefix substring accept
  * @accept: the set of characters to check for in s
  * Return: the index of the first character that is not defined in the set of
  *characters defined in accept. If all the characters in s are found in accept
  * then the length of s is returned. If the first character of s is not found
  * in the set of characters in accept then the function returns zero.
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, r, slen, aclen, j;

	aclen = 0;
	slen = 0;
	r = 0;

	while (s[slen])
	{
		slen++;
	}
	while (accept[aclen])
	{
		aclen++;
	}
	if ((aclen == 0) || (slen == 0))
	{
		return (r);
	}
	for (i = 0; i < slen; i++)
	{
		for (j = 0; j < aclen; j++)
		{
			if (s[i] != accept[j])
			{
				if (j == (aclen - 1))
				{
					r = i;
					return (r);
				}
			}
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (i == (slen - 1))
		{
			r = slen;
		}
	}
	return (r);
}
