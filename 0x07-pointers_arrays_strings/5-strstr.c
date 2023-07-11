#include "main.h"

/**
  * _strstr - locates a substring
  * @haystack: the string that is to be searched for the presence of needle
  * @needle: the string that is to be located within haystack
  * Description: the terminating null bytes are not compared
  * Return: a pointer to the first occurence of substring needle in haystack
  */
char *_strstr(char *haystack, char *needle)
{
	int i, j, hlen, nlen;
	char *r = 0;

	hlen = getLength(haystack);
	nlen = getLength(needle);

	for (i = 0; i < hlen; i++)
	{
		j = 0;
		while (j < nlen)
		{
			if (haystack[i] == needle[j])
			{
				if (j == (nlen - 1))
				{
					r = &haystack[i - (nlen - 1)];
					return (r);
				}
				j++;
				i++;
			} else
			{
				break;
			}
		}
	}
	return (r);
}
/**
  *getLength - determines the length of a string ignoring terminating null byte
  * @s: pointer to the string whose length is to be determined
  *
  * Return: length of the string as an integer
  */
int getLength(char *s)
{
	int i;

	i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
