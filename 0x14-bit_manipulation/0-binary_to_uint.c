#include "main.h"

/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: pointer to a string of 0 and 1 chars
  * Return: the unsigned int equivalent of the binary number.
  */
unsigned int binary_to_uint(const char *b)
{
	int  i, len, c;
	unsigned int r;

	if (b == NULL)
	{
		return (0);
	}
	r = 0;
	c = 0;
	len = getLength(b);
	i = len - 1;

	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		r = r + ((b[i] - '0') * raise(2, c));
		c++;
		i--;
	}
	return (r);
}
/**
  * raise - raises a number to a certain number.
  * @c: the number to be raised.
  * @n: the power that c is to be raised to.
  * Return: the result.
  */
int raise(int c, int n)
{
	int r, i;

	r = c;

	if (n == 0)
	{
		return (1);
	}
	for (i = 1; i < n; i++)
	{
		r = r * c;
	}
	return (r);
}
/**
  * getLength - returns the length of a string.
  * @b: the string whose length is to be determined.
  * Return: the length.
  */
int getLength(const char *b)
{
	int i;

	i = 0;

	while (b[i])
	{
		i++;
	}
	return (i);
}
