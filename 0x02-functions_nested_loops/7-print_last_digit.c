#include "main.h"

/**
  * print_last_digit - prints the last digit of a number
  * @a: Number whose last digit is to be determined
  *
  *Return: the last digit of the number
  */
int print_last_digit(int a)
{
	int m, mod;

	m = a;

	if (m < 0)
	{
		m = m * -1;
	}
	mod = m % 10;

	_putchar('0' + mod);
	return (mod);
}
