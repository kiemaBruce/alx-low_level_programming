#include "main.h"

/**
  * print_most_numbers - prints all numbers from 0 to 9 except 2 and 4
  */
void print_most_numbers(void)
{
	int a = 48;

	while (a < 58)
	{
		if (a != 50 && a != 52)
		{
			_putchar(a);
		}
		a = a + 1;
	}
	_putchar('\n');
}
