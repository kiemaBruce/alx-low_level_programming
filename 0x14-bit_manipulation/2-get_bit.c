#include "main.h"

/**
  * get_bit - returns the value of a bit at a given index.
  * @n: the number whose binary value is to be evaluated.
  * @index: the position whose bit value is to be determined.
  * Return: the value of the bit as an int. It returns -1 if an error occurs.
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int t, m, l, b;
	unsigned int k, d;
	char *s, *q;

	/* Get the number of bits we are dealing with */
	l = sizeof(unsigned long int) * 8;
	/* Return -1 if index is too large */
	if (index > (l - 1))
		return (-1);
	m = 1;
	s = binary_string(n);
	if (s == NULL)
		return (-1);
	k = binary_to_uint((const char *)s);
	/**
	  *To create an appropriate mask d:(which will be casted accordingly)
	  * First let the 1 be at position equal to length of string, that is
	  * counting from the  right.
	  * Secondly, truncate the mask such that the preceeding zeroes are
	  * removed. (This is because there will be zeroes as we are dealing
	  * with 64 bits.)
	  */
	t = m << (getlength(s) - 1);
	q = binary_string(t);
	if (q == NULL)
		return (-1);
	d = binary_to_uint((const char *)q);
	/*b = (unsigned long int)k & (t >> index);*/
	b = (unsigned long int)k & ((unsigned long int)d >> index);
	if (b == 0)
		return (0);
	else if (b != 0)
		return (1);
	free(s);
	free(q);
	return (-1);
}
/**
  * binary_string - returns a binary equivalent of a number.
  * @n: the number to be evaluated.
  * Description: the function doesn't return the preceeding 0's before the
  * first 1 in the binary equivalent.
  * Return: the string containing the binary equivalent of n. It returns NULL
  * in case of an error.
  */
char *binary_string(unsigned long int n)
{
	unsigned long int l, t, m, c, i, j, r;
	char *s;

	/**
	  * This approach wastes memory as it assigns same memory size for all
	  * cases.
	  * A better approach would be to use linked lists
	  */
	l = sizeof(unsigned long int) * 8;
	s = malloc(l + 1);
	if (s == NULL)
		return (NULL);
	if (n == 0)
	{
		s[0] = '0';
		s[1] = '\0';
		return (s);
	}
	m = 1;
	c = j = 0;
	t = m << (l - 1);
	for (i = 0; i < l; i++)
	{
		r = n & (t >> i);
		if (r == 0 && c == 1)
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
  * binary_to_uint - converts a binary number to an unsigned int.
  * @b: the string that contains the binary number.
  * Return: the converted number. The function returns 0 if b is NULL or if
  * there is one or more chars in the string b that is not 0 or 1.
  */
unsigned int binary_to_uint(const char *b)
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
