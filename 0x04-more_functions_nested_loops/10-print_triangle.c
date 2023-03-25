#include "main.h"

/**
  *print_triangle -prints a triangle, followed by a new line
  *@size: the size of the triangle, i.e., the number of '#' in the base
  */
void print_triangle(int size)
{
	/**if (size <= 0)
	{
		_putchar('\n');
		return;
	}*/

	int n, i, b, h, s;

	/*Initiatlly the number of spaces printed is zero for each new line*/
	s = 0;

	for (n = size; n > 0; n--)
	{
		for (i = 1; i < n; i++)
		{
			/*
			 * Print a space, and add one to the number of spaces
			 * printed
			 */
			_putchar(' ');
			s++;
		}
		/*
		 *The number of hashes printed to make the triangle is one less
		 * than the number of spaces printed on that line
		 */
		h = size - s;
		for (b = 0; b < h; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
		/*Reset the number of spaces printed when printing a new line*/
		s = 0;
	}
}
