#include "main.h"

/**
  * string_nconcat - concatenates two strings.
  * @s1: first string
  * @s2: second string
  * @n: the number of bytes from s2 that are to be concatenated
  * Description: the concatenated string is written to a new location in
  * memory, and the string is null terminated
  *
  * Return: pointer to the concatenated string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	int b;
	char *s;

	s1 = nullChecker(s1);
	s2 = nullChecker(s2);

	if (n < (unsigned int)getLength(s2))
	{
		s = malloc(getLength(s1) + (n * sizeof(char)));
	}
	s = malloc(getLength(s1) + getLength(s2));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (unsigned int)getLength(s1); i++)
	{
		*(s + i) = s1[i];
	}
	b = 0;
	if (n >= strlen(s2))
	{
		for (i = (unsigned int)getLength(s1);
				i < (unsigned int)(getLength(s1) + getLength(s2)); i++)
		{
			*(s + i) = s2[b];
			b++;
		}
	}
	b = 0;
	for (i = getLength(s1); i < (getLength(s1) + n); i++)
	{
		*(s + i) = s2[b];
		b++;
	}
	s[i] = '\0';
	return (s);
}
/**
  * nullChecker - checks whether a string is NULL
  * @t: the string to be checked
  * Return: empty string if t is NULL. Otherwise return t
  */
char *nullChecker(char *t)
{
	if (!t)
	{
		return ("");
	}
	return (t);
}
/**
  * getLength - determines the length of a string
  * @s: the string whose length is to be determined
  * Return: the length as an int
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
