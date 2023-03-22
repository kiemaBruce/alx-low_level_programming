#include "main.h"

/**
  * jack_bauer -prints every minute of the day of Jack Bauer, starting from
  * 00:00 to 23:59
  */
void jack_bauer(void)
{
	int i, b, c, d;

	for (i = 0; i < 3; i++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c < 6; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					_putchar('0' + i);
					_putchar('0' + b);
					_putchar(':');
					_putchar('0' + c);
					_putchar('0' + d);
					_putchar('\n');
					if (i == 2 && b == 3 && c == 5 && d == 9)
					{
						return;
					}
				}
			}
		}
	}
}
