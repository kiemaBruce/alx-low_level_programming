#include "main.h"

/**
  * print_array - prints the first n elements of an array of integers
  * @a: the array of integers
  * @n: the number of elements to be printed
  */
void print_array(int *a, int n)
{
	int i, length;

	length = 0;

	while (a[length])
	{
		length++;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
