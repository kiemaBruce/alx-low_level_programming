#include "main.h"

/**
  * string_nconcat - concatenates two strings into a new string.
  * @s1: the first string.
  * @s2: the second string.
  * @n: the first n bytes of s2 are to be copied into the new string. If n is
  * greater than or equal to the length of s2, then the entire string s2 is
  * copied into the new string that contains both s1 and s2.
  * Return: if successful it returns a pointer to the new string. If it fails,
  * it returns NULL.
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int tlength, i, j, c;
	char *r;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= (unsigned int)getLength(s2))
		tlength = getLength(s1) + getLength(s2);
	else
		tlength = getLength(s1) + n;
	r = malloc((tlength + 1) * sizeof(char));
	if (r == NULL)
		return (NULL);
	j = 0;
	/*
	 *c is just used to indicate whether we are done with s1 or not. If
	 *we are done copying s1 into the new location we now copy s2.
	 */
	c = 0;
	for (i = 0; i < tlength; i++)
	{
		if (s1[j] == '\0' && i == getLength(s1))
		{
			c = 1;
			j = 0;
		}
		if (c == 0)
			r[i] = s1[j];
		else
			r[i] = s2[j];
		j++;
	}
	r[i] = '\0';
	return (r);
}
/**
  * getLength - returns the length of a string.
  * @s: the string whose length is to be determined.
  * Return: the length.
  */
int getLength(char *s)
{
	int i;

	i = 0;

	while (s[i])
		i++;
	return (i);
}
