#include "main.h"

/**
  * print_diagonal - draws a diagonal line on the terminal
  * @n: number of times the character \ should be printed
  */
void print_diagonal(int n)
{
	int i, b, a;

	b = 1;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		for (a = 1; a < b; a++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		b++;
	}
}
