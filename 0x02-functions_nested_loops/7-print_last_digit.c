#include "main.h"

/**
  * print_last_digit - prints the last digit of a number
  * @a: Number whose last digit is to be determined
  *
  *Return: the last digit of the number if successful and zero otherwise
  */
int print_last_digit(int a)
{
	int ret, mod;

	ret = 1;

	mod = a % 10;
	if (mod < 0)
	{
		ret = 0 - mod;
	} else
	{
		ret = mod;
	}

	_putchar('0' + ret);
	/* printf("%d", ret); */
	return (ret);
}
