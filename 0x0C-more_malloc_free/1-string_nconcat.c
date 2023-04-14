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
	int i, b;
	char *s;

	s1 = nullChecker(s1);
	s2 = nullChecker(s2);

	if (n < strlen(s2))
	{
		s = malloc(strlen(s1) + (n * sizeof(char)));
	}
	s = malloc(strlen(s1) + strlen(s2));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < strlen(s1); i++)
	{
		*(s + i) = s1[i];
	}
	b = 0;
	if (n >= strlen(s2))
	{
		for (i = strlen(s1); i < (strlen(s1) + strlen(s2)); i++)
		{
			*(s + i) = s2[b];
			b++;
		}
	}
	b = 0;
	for (i = strlen(s1); i < (strlen(s1) + n); i++)
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
