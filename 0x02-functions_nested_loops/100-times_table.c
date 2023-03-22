#include "main.h"

/**
  * times_table - prints the 9 times table, starting with 0
  */
void print_times_table(int n)
{
	if (n > 15 || n < 0)
	{
		return;
	} else 
	{
		int i = 0;
		int a = 0;
		int lim = n + 1;
		int res = 0;

		while (a < lim)
		{
			while (i < lim)
			{
				if (i != 0)
				{
					res = a * i;
					if (res <= 9)
					{
						printf(",   ");
					} else if (res >= 10 && res < 100)
					{
						printf(",  ");
					}else if (res >= 100)
					{
						printf(", ");
					}
					printf("%d", res);
				} else
				{
					res = a * i;
					printf("%d", res);
				}
				i++;
			}
			a++;
			i = 0;
			printf("\n");
		}
	}
}
