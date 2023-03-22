#include "main.h"

/**
  * print_last_digit - prints the last digit of a number
  * @a: Number whose last digit is to be determined
  *
  *Return: the last digit of the number
  */
int print_last_digit(int a)
{
	int mod = a % 10;

	_putchar(mod + '0');
	return (mod);
}
