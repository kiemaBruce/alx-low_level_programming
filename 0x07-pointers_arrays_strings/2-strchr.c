#include "main.h"

/**
  * _strchr - locates a character in a string.
  * @s: the string to be searched
  * @c: the character to be located in s
  *
  *Return: a pointer to the first occurence of the c in s
  */
char *_strchr(char *s, char c)
{
	int slength, i;
	char *p = 0;

	slength = 0;

	while (s[slength])
	{
		slength++;
	}
	/**
	  *The above loop doesn't count the terminating null byte, but we need
	  *it in this case. Hence add one to the string length
	  */
	slength++;

	for (i = 0; i < slength; i++)
	{
		if (s[i] == c)
		{
			p = &s[i];
		}
	}
	/*If the character is not found, return NULL*/
	return (p);
}
