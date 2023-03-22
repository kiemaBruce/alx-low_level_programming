#include "main.h"

void times_table(void)
{
	int i = 0;
	int n = 0;

	while (n < 10)
	{
		while (i < 10)
		{
			int res = n * i;
			printf("%d", res);
			if (i != 9){
				printf(", ");
			}
			i++;
		}
		n++;
		i = 0;
		printf("\n");
	}
	/** while (i < 10)
	{
		int prod = 9 * i;
		_putchar(prod + '0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar('\n');
		i++;
	}
	*/
}
