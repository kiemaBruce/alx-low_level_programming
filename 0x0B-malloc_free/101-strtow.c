#include "main.h"

/**
  * strtow - splits a string into words.
  * @str: the string that is to be split.
  * Description: the delimiter used is the SPACE character, and the words are
  * stored in an array of strings. The array has one extra memory slot malloced
  * to it which is used to store NULL as the last element of the array.
  * Return: a pointer to the array of strings that contains the words. It
  * returns NULL if str = NULL || str = " ".
  */
char **strtow(char *str)
{
	char **array = NULL;
	int i, j, w, u, p, *wlengths;

	if (str == NULL || (*str) == '\0' || (str[0] == 32  && getLength(str) == 1))
		return (NULL);
	wlengths = wordlengths(' ', str);
	w = arrcount(wlengths);
	array = malloc((w + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	i = p = u = 0;
	while (i < w)
	{
		if (i == p)
		{
			array[i] = malloc((wlengths[i] + 1) * sizeof(char));
			if (array[i] == NULL)
				return (NULL);
		}
		p = i;
		if (str[u] == ' ')
		{
			u++;
		} else
		{
			j = 0;
			while (str[u] != ' ' && str[u] != '\0')
			{
				array[i][j] = str[u];
				u++;
				j++;
			}
			if (str[u] == ' ' || str[u] == '\0')
				array[i][j] = '\0';
			i++;
		}
	}
	array[i] = NULL;
	free(wlengths);
	return (array);
}
/**
 * arrcount - counts the number of elements in a special array.
 * @a: pointer to the array.
 * Description: the array is an array of integers that is terminated by a -1.
 * Return: the number of elements in the array, i.e., the number of elements
 * before the -1 element.
 */
int arrcount(int *a)
{
	int i;

	i = 0;

	while (a[i] != -1)
	{
		i++;
	}
	return (i);
}
/**
 * wordlengths - returns an array of the lengths of the words in a string.
 * @delim: the character that is to be used to separate the string into words.
 * @s: the string that is to be analyzed.
 * Description: after the length of the last word in the string is stored in
 * the array, an additional array element is added whose value is -1. This
 * value is used to demarcate the end of the array.
 * Return: an array that contains the lengths.
 */
int *wordlengths(char delim, char *s)
{
	int u, i, l, w;
	int *array = NULL;

	if (delim == '\0' || s == NULL)
		return (NULL);
	w = wordcounter(delim, s);
	printf("w: %d\n", w);
	array = malloc((w + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);
	u = i = l = 0;

	while (i <= getLength(s))
	{
		if (s[i] != ' ' && s[i] != '\0')
		{
			l++;
		} else if (s[i] == ' ' || s[i] == '\0')
		{
			if (l != 0 && i != 0)
			{
				array[u] = l;
				u++;
				l = 0;
			}
		}
		i++;
	}
	/*Let the last array element be -1 to indicate the end of the array*/
	printf("u: %d\n", u);
	array[u] = -1;
	return (array);
}
/**
 * wordcounter - returns the number of words in a string.
 * @delim: the character that is used to separate the string s into words.
 * @s: the string that is to be analyzed.
 * Return: the number of words. If s or delim is equal to NULL, it returns -1.
 */
int wordcounter(char delim, char *s)
{
	int i, w;

	if (delim == '\0' || s == NULL)
		return (-1);
	w = 0;
	for (i = 0; i < getLength(s); i++)
	{
		if (s[i] != ' ')
		{
			while (1)
			{
				if (s[i] == ' ' || s[i] == '\0')
				{
					w++;
					break;
				}
				i++;
			}
		}
	}
	return (w);
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
