#include "main.h"

/**
  *print_line - draws a straight line in the terminal
  *@n: the number of times that the underscore character is printed to make a
  *straight line
  */
void print_line(int n)
{
	if (n > 0)
	{
		for (n = 0; n < 5; n++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
