#include "main.h"

/**
  * clear_bit - sets the value of a bit to 0 at a given index.
  * @n: the number whose bits are to be manipulated.
  * @index: the position, starting from 0 on the right hand side going
  * leftwards, whose bit value is to be cleared.
  * Return: 1 if it worked. -1 if an error occured.
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	char *s;
	unsigned int k;

	if (n == NULL)
		return (-1);
	/**
	  * steps
	  * get the binary equivalent(truncated to remove preceeding zeros)
	  * set the bit at position index.
	  * convert the resulting string to an int
	  * set the value at n to that new value.
	  */
	s = binary_string(*n);
	if (s == NULL)
		return (-1);
	if (index > (unsigned int)(getlength(s) - 1))
		return (-1);
	/* Because the index starts from the right this time */
	s[getlength(s) - (index + 1)] = '0';
	/*s[index] = '1';*/
	/*printf("s is: %s\n", s);*/
	k = binary_to_uint((const char *)s);
	/*printf("k: %u\n", k);*/
	*n = (unsigned long int)k;
	free(s);
	return (1);
}
/**
  * binary_string - returns a binary equivalent of a number.
  * @n: the number to be evaluated.
  * Description: the function doesn't return the preceeding 0's before the
  * first 1 in the binary equivalent.
  * Return: the string containing the binary equivalent of n.
  */
char *binary_string(unsigned long int n)
{
	unsigned long int l, t, m, c, i, j, r;
	char *s;

	/**
	  * This approach wastes memory as it assigns same memory size for all
	  * cases.
	  * A better approach would be to use linked lists.
	  */
	l = sizeof(unsigned long int) * 8;
	s = malloc(l + 1);
	if (s == NULL)
	{
		free(s);
		return (NULL);
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
