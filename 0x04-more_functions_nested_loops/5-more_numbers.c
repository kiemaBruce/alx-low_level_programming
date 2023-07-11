#include "main.h"

/**
  *more_numbers - prints 10 times the numbers, from 0 to 14, followed by a new
  *line
  */
void more_numbers(void)
{
	int b, i, o;

	o = 0;

	while (o < 10)
	{
		b = 48;
		for (i = 0; i < 16; i++)
		{
			if (i > 9)
			{
				if (i == 15)
				{
					break;
				}
				if (i == 10)
				{
					b = 48;
				}
				_putchar(49);
			}
			_putchar(b);
			b++;
		}
		_putchar('\n');
		o++;
	}
}
