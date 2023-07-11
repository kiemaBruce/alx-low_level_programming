#include "main.h"

/**
  * print_sign - prints the sign of a number.
  * @n: the number whose sign is to be printed
  *
  *Return: 1 if n > 0, 0 if n == 0 and -1 if n < 0
  */
int print_sign(int n)
{
	int ret;

	if (n > 0)
	{
		_putchar('+');
		ret = 1;
	} else if (n == 0)
	{
		_putchar(48);
		ret = 0;
	} else if (n < 0)
	{
		_putchar('-');
		ret = -1;
	}
	return (ret);
}
