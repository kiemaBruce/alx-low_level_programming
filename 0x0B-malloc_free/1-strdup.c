#include "main.h"

/**
  * _strdup - duplicates a string to a newly allocated space in memory
  * @str: the string to be duplicated
  * Return: NULL if str = NULL as well as if insufficient memory was available.
  * On success, it returns a pointer to the duplicated string
  */
char *_strdup(char *str)
{
	int slen, i;
	char *ps;

	if (str[0] == '\0' || str[0] == atoi("") || str == NULL)
	{
		return (NULL);
	}

	slen = getLength(str);
	ps = malloc((slen + 1) * sizeof(char));

	if (ps == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < slen; i++)
	{
		ps[i] = str[i];
	}
	ps[i] = '\0';
	return (ps);
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
