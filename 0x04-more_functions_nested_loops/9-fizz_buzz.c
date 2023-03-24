#include "main.h"

void fizz_buzz(void)
{
	int i, n;

	n = 100;

	for (i = 1; i <= n; i ++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			if (((i % 3) == 0) && ((i % 5) == 0))
			{
				printf("FizzBuzz");
			} else if (((i % 3) == 0) && ((i % 5) != 0))
			{
				printf("Fizz");
			} else if (((i % 5) == 0) && ((i % 3) != 0))
			{
				printf("Buzz");
			}
		} else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
}
