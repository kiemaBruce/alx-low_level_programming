#include "main.h"

/**
  * print_most_numbers - prints all numbers from 0 to 9 except 2 and 4
  */
void print_most_numbers(void)
{
	int a;

	while (a > 47 && a < 58)
	{
		if (a == 50 || a == 52)
		{
			continue;
		}
		_putchar(a);
	}
}
