#include "main.h"

/**
  *main - prints fizz buzz
  *Desctiption: Prints the numbers 0 to 100, but prints Fizz for multiples
  *of three, Buzz for multiples of five and FizzBuzz for multiples of both
  *three and five.
  *Return: Always (0) Success
  */
int main(void)
{
	int i, n;

	n = 100;

	for (i = 1; i <= n; i++)
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
	return (0);
}
