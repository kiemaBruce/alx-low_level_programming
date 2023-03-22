#include "main.h"

/**
  * print_to_98 -  prints all natural numbers from n to 98, and then a new line
  * @n: the lower limit
  */
void print_to_98(int n)
{
	int i;

	for (i = n; i < 99; i++)
	{
		if (i >= 0)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	printf("\n");
}
