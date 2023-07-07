#include "main.h"

/**
  * flip_bits - returns the number of bits needed to be flipped.
  * @n: the first number.
  * @m: the second number.
  * Description: the function returns the number of bits needed to be flipped
  * in order to get from n to m or vice versa.
  * Return: the number of bits to be flipped. If there is an error, the
  * function doesn't return any value but rather exits with an error code
  * and prints an error message.
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	char *ns, *ms;
	unsigned long int l, i, r;
	unsigned int count;

	ns = binary_string(n, 2);
	ms = binary_string(m, 2);
	if (ns == NULL || ms == NULL)
	{
		dprintf(STDERR_FILENO, "Error in function binary_string\n");
		exit(99);
	}
	l = sizeof(unsigned long int) * 8;
	count = 0;
	for (i = 0; i < l; i++)
	{
		r = (ns[i] - '0') ^ (ms[i] - '0');
		if (r == 1)
			count++;
	}
	return (count);
}
/**
 * binary_string - returns a binary equivalent of a number.
 * @n: the number to be evaluated.
 * @flag: used to specify whether the binary to be returned should have the
 * zeros that preceed the first 1. A flag value of 1 means that the zeros
 * should be truncated, a flag of two means that the returned string should
 * contain all the zeros (the number of zeros is determined by the size in
 * bytes of an unsigned long int in a particular system or environment).
 * Description: the function returns the preceeding 0's before the
 * first 1 in the binary equivalent.
 * Return: the string containing the binary equivalent of n.
 */
char *binary_string(unsigned long int n, int flag)
{
	unsigned long int l, t, m, c, i, j, r;
	char *s;

	l = sizeof(unsigned long int) * 8;
	s = malloc(l + 1);
	if (s == NULL)
		return (NULL);
	m = 1;
	c = j = 0;
	t = m << (l - 1);
	for (i = 0; i < l; i++)
	{
		r = n & (t >> i);
		/*Truncates to remove preceeding zeros*/
		if (r == 0 && c == 1 && flag == 1)
		{
			s[j] = '0';
			j++;
		}
		if (r == 0 && flag == 2)
		{
			s[j] = '0';
			j++;
		}
		if (n == 0)
		{
			s[j] = '0';
			j++;
		}
		if (r != 0)
		{
			s[j] = '1';
			j++;
			c = 1;
		}
	}
	s[j] = '\0';
	return (s);
}
