#include "main.h"

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
