#include "main.h"

/**
  * print_binary - prints the binary representation of a number.
  * @n: the number to be printed in binary form.
  */
void print_binary(unsigned long int n)
{
	unsigned long int t, i, l, r, m;
	int c;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	(void)l;
	m = 1;
	c = 0;
	/*t = _raiselong(2, (sizeof(unsigned long int) * 8));*/
	t = m << 31;
	l = sizeof(unsigned long int) * 8;
	/* for (i = 0; i < l; i++) */
	for (i = 0; i < 32; i++)
	{
		r = n & (t >> i);
		if (r == 0 && c == 1)
			_putchar('0');
		if (r != 0)
		{
			_putchar('1');
			c = 1;
		}
	}
}
/**
  * _raiselong - raises a number to an exponent.
  * @x: the number to be raised.
  * @exp: the exponent to which x is to be raised.
  * Return: the result. If exp is negative, the function returns 0.
  */
unsigned long int _raiselong(int x, int exp)
{
	int i;
	unsigned long int r;

	if (exp == 0)
		return (1);
	if (exp < 0)
		return (0);
	r = x;
	for (i = 1; i < exp; i++)
	{
		r = r * x;
	}
	return (r);
}
