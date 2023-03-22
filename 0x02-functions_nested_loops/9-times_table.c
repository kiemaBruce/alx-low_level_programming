#include "main.h"

/**
  * times_table - prints the 9 times table, starting with 0
  */
void times_table(void)
{
	int i = 0;
	int n = 0;
	int res = 0;

	while (n < 10)
	{
		while (i < 10)
		{
			if (i != 0)
			{
				res = n * i;
				/* if (i != 9) */
				/*{*/
					if (res <= 9)
					{
						printf(",  ");
					} else if (res >= 10)
					{
						printf(", ");
					}
				/*}*/
				printf("%d", res);
			} else 
			{
				res = n * i;
				printf("%d", res);
			}
			/* res = n * i; */

			/* printf("%d", res); */
			/* checker = 1; */

			/* if (res <= 9 && res != 0)
			{
				printf(",  ");
			} else if (res >= 10 && res != 0)
			{
				printf(", ");
			}*/
			/*printf("%d", res);*/
			/*if (i != 9)
			{
				if (res <= 9)
				{
					printf(",  ");
				} else if (res >= 10)
				{
					printf(", ");
				}
			}*/
			i++;
		}
		n++;
		i = 0;
		printf("\n");
	}
	/**
	* while (i < 10)
	* {
	*	int prod = 9 * i;
	*	_putcihar(prod + '0');
	*	_putchar(',');
	*	_putchar(' ');
	*	_putchar(' ');
	*	_putchar('\n');
	*	i++;
	*}
	*/
}
