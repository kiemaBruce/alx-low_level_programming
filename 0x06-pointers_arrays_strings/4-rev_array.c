#include "main.h"

/**
  * reverse_array - reverses the content of an array of integers
  * @a: pointer to the array of integers
  * @n: the number of elements to be reversed
  */
void reverse_array(int *a, int n)
{
	int v, i, d, temp;

	v = n - 1;
	d = n / 2;

	for (i = 0; i < d; i++)
	{
		temp = a[i];
		a[i] = a[v - i];
		a[v - i] = temp;
	}
}
