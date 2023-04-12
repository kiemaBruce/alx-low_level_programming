#include "main.h"

/**
  * str_concat - concatenates two strings
  * @s1: first string
  * @s2: second string
  * Description: if NULL is passed it is treated as an empty string
  * Return: a pointer that points to a newly allocated space in memory which
  * contains the contents of s1, followed by the contents of s2, and null
  * terminated. Returns NULL on failure.
  */
char *str_concat(char *s1, char *s2)
{
	int s1len, s2len, totlen, y, i;
	char *p;

	if (!s1)
	{
		s1[0] = '\0';
		/*s1len = 0;*/
	}
	if (!s2)
	{
		s2[0] = '\0';
		/*s2len = 0;*/
	}

	s1len = getLength(s1);
	s2len = getLength(s2);
	totlen = s1len + s2len;

	p = (char *)malloc(totlen + 1);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < s1len; i++)
	{
		p[i] = s1[i];
	}
	y = 0;

	for (i = s1len; i < totlen; i++)
	{
		p[i] = s2[y];
		y++;
	}
	p[i] = '\0';
	return (p);
}
/**
  * getLength - determines the length of a char array
  * @str: the string whore length is to be determined
  * Return: the size of the string as an int, not counting the termicating null
  * byte.
  */
int getLength(char *str)
{
	int i;

	i = 0;

	while (str[i])
	{
		i++;
	}
	return (i);
}
