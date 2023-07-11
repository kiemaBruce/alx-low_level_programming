#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: the string that is to be converted to an integer.
 * Description: the number in the string may be preceeded by an infinite number
 * of characters, and the function takes into account all the '+' and '-' signs
 * before the number.
 * Return: the integer. If no numbers are found, it returns 0.
 */
int _atoi(char *s)
{
	int len, p, res, i, sig;
	char *sub;

	if (s == NULL)
		return (0);

	i = 0;
	sub = intstring(s);
	if (sub == NULL)
		return (0);
	len = _strlen(sub);
	p = len - 1;
	res = 0;
	sig = signdeterminer(s);
	if (sig == 1)
	{
		for (p = len - 1; p >= 0; p--)
		{
			res = res + (-(sub[i] - '0') * raise(10, p));
			i++;
		}
	} else
	{
		for (p = len - 1; p >= 0; p--)
		{
			res = res + ((sub[i] - '0') * raise(10, p));
			i++;
		}
	}
	return (res);
}
/**
 * raise - raise a number to a power.
 *@x: the number to be raised.
 *@y: the power to raise the number to.
 *
 *Return: the raised result.
 */
int raise(int x, int y)
{
	int i, res;

	if (y == 0)
	{
		res = 1;
		return (res);
	}
	res = x;

	for (i = 1; i < y; i++)
	{
		res = res * x;
	}
	return (res);
}
/**
 * intstring - returns the first integer substring from a longer string.
 * @s: the string to be analyzed.
 * Return: the substring containing the integer. If no number is found in the
 * string it returns NULL.
 */
char *intstring(char *s)
{
	int i, d, k;
	char *sub = NULL;

	i = k = 0;
	/* 11 is the number of characters in INT_MAX including the sign */
	sub = malloc(11 * sizeof(char));
	while (s[i] != '\0')
	{
		if (s[i] > 47 && s[i] < 58)
		{
			sub[k++] = s[i];
			d = i + 1;
			if (s[d] < 48 || s[d] > 57)
			{
				sub[k] = '\0';
				break;
			}
		}
		i++;
	}
	/* When c == 0 it means that no number was found in the string */
	if (k == 0)
		return (NULL);
	else
		return (sub);
}
/**
 * signdeterminer - determines the resulting sign of a number.
 * @s: the string that is to be parsed.
 * Description: the function determines the resulting operator from a series of
 * '+' and '-' operators. These are determined from a string.
 * Return: 0 if the resulting operator is '+' and 1 if it is '-'.
 */
int signdeterminer(char *s)
{
	int i, r, c, b;

	i = c = r = 0;
	while (s[i] != '\0')
	{
		if (s[i] == 45)
		{
			if (c > 0)
			{
				if (r == 1)
					r = 0;
				else
					r = 1;
			} else
			{
				r = 1;
				c++;
			}
		}
		if (s[i] > 47 && s[i] < 58)
		{
			b = i + 1;
			if (s[b] < 48 || s[b] > 57)
				break;
		}
		i++;
	}
	return (r);
}
/**
 * _strlen - returns the length of a string
 * @s: the string whose length is to be determined
 *Return: the string length, exluding the trailing \0
 */
int _strlen(char *s)
{
	int size, i;

	size = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		size++;
	}
	return (size);
}
/*
 *This comment refers to a break statement after a case in a switch statement
 * The break statement is unnecesary because we
 * don't have any other case statement. If we
 * did, the break ensures that the code
 * execution doesn't fall through to the next
 * case statement, of course unless that is what
 * we wanted to do. E.g. in the case where you
 * might have multiple checks/ conditions
 */
/*break;*/

