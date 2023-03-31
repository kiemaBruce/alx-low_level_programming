#include "main.h"

/**
  * print_number - prints an integer
  * @n: the integer to be printed
  */
void print_number(int n)
{
	int b, i, r;

	i = n;

	if (n < 0)
	{
		i = 0 - n;
		_putchar('-');
		print_number(i);
		return;
	}
	if (n == 0)
	{
		_putchar(48);
	}
	while (i > 0)
	{
		b = i;
		r = det_digits(b) - 1;

		while (i > 9)
		{
			i = i / 10;
		}
		_putchar('0' + i);
		i = b - (i * (raise(10, r)));
		if ((det_digits(i)) != r)
		{
			int diff, u;

			diff = r - (det_digits(i));

			for (u = 1; u <= diff; u++)
			{
				_putchar(48);
			}
		}

	}
}
/**
  * det_digits - determines the number of digits an integer has
  *@x: the integer whose digits are to be determined
  *
  *Return: the number of digits if an integer, and zero if the integer is zero
  */
int det_digits(int x)
{
	int i = 0;

	if (x == 0)
	{
		return (0);
	}
	if (x < 0)
	{
		x = 0 - x;
	}
	while (x >= 1)
	{
		x = x / 10;
		i++;
	}
	return (i);
}

/**
  * raise - raise a number to a power
  *@x: the number to be raised
  *@y: the power to raise the number to
  *
  *Return: the raised result
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
