#include "main.h"

/**
  * print_square - prints a square, followed by a new line
  * @size: the size of the square
  */
void print_square(int size)
{
	int o, i;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (o = 0 ; o < size; o++)
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
