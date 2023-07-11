#include "main.h"

/**
  * argstostr - concatenates all arguments of the program.
  * @ac: the number of arguments passed to the program.
  * @av: an array of strings. The strings are the arguments that are passed to
  * the program.
  * Return: the string containing all the concatenated arguments. If ac == 0 or
  * av == NULL, it returns NULL. It also returns NULL if it fails, for example,
  * if malloc fails.
  */
char *argstostr(int ac, char **av)
{
	char *s = NULL;
	int i, len, k, j;

	if (ac == 0 || av == NULL)
		return (NULL);
	i = k = j = 0;
	len = get_total_length(ac, av);
	/**
	  *The 1 is for the terminating NULL byte, & the ac is for the \n after
	  *each argumenti, and the len if for the other characters.
	  */
	s = malloc((len + ac + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	while (i < ac)
	{
		if (av[i][k] == '\0')
		{
			s[j] = ('\n');
			k = 0;
			i++;
			j++;
			/* exit the loop or get stuck indefinitely */
			continue;
		}
		s[j] = av[i][k];
		k++;
		j++;
	}
	s[j] = '\0';
	return (s);
}

/**
  * get_total_length - returns the total length of all the string arguments.
  * @ac: the number of arguments passed to the program.
  * @av: an array of strings; the strings are the arguments that are passed to
  * the program.
  * Return: the total length.
  */
int get_total_length(int ac, char **av)
{
	int i, len;

	if (ac == 0 || av == NULL)
		return (0);
	len = 0;

	for (i = 0; i < ac; i++)
	{
		len = len + getLength(av[i]);
	}
	return (len);
}
/**
  * getLength - returns the length of a string.
  * @s: the string whose length is to be determined.
  * Return: the length. If s == NULL, 0 is returned.
  */
int getLength(char *s)
{
	int len;

	len = 0;

	while (s[len])
	{
		len++;
	}
	return (len);
}
