#include "main.h"

/**
  * set_bit - sets the value of a bit to 1 at a given index.
  * @n: pointer to the number whose bit is to be set.
  * @index: the position, starting from the right going leftwards, whose bit
  * value is to be set.
  * Return: 1 if the bit was successfully set. -1 if an error occured.
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	char *s;
	unsigned long int k;

	if (n == NULL)
		return (-1);
	/**
	  * steps
	  * get the binary equivalent(truncated to remove preceeding zeros)
	  * set the bit at position index.
	  * convert the resulting string to an int
	  * set the value at n to that new value.
	  */
	s = binary_string(*n, 1);
	if (s == NULL)
		return (-1);
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	/**
	  * If there is an attempt to modify a bit that is within the width of
	  * unsigned long int, but which is also not preceeded by a 1(counting
	  * from the right/ most significant bit.), return the entire bit
	  * string.
	  */
	if (index > (unsigned int)getlength(s))
	{
		s = binary_string(*n, 2);
	}
	/* Because the index starts from the right */
	s[getlength(s) - (index + 1)] = '1';
	k = binary_to_ulongint((const char *)s);
	*n = k;
	free(s);
	return (1);
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
/**
 * binary_to_ulongint - converts a binary number to an unsigned int.
 * @b: the string that contains the binary number.
 * Return: the converted number. The function returns 0 if b is NULL or if
 * there is one or more chars in the string b that is not 0 or 1.
 */
unsigned long int binary_to_ulongint(const char *b)
{
	unsigned int r, i, l;

	if (b == NULL)
		return (0);
	r = i = 0;
	/* Get the greatest power by which 2 will be raised */
	l = getlength((char *)b) - 1;
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '0')
			r = r + (0 * _raise(2, l--));
		else if (b[i] == '1')
			r = r + (1 * _raise(2, l--));
		i++;
	}
	return (r);
}
/**
 * getlength - returns the length of a string.
 * @s: the string whose length is to be determined.
 * Description: the terminating NUL byte in the string is not counted.
 * Return: the length.
 */
int getlength(char *s)
{
	int i;

	i = 0;
	/* while s[i] is not equal to 0 */
	while (s[i])
		i++;
	return (i);
}
/**
 * _raise - raises a number to an exponent.
 * @x: the number to be raised.
 * @exp: the exponent to which x is to be raised.
 * Return: the result. If exp is negative, the function returns 0.
 */
int _raise(int x, int exp)
{
	int r, i;

	if (exp == 0)
		return (1);
	if (exp < 0)
		return (0);
	r = x;
	for (i = 1; i < exp; i++)
		r = r * x;
	return (r);
}
