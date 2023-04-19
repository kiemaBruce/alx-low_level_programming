#include "function_pointers.h"

/**
  * int_index - searches for an integer in an array
  * @array: the array to be searched for an integer
  * @size: number of elements in the array
  * @cmp: a pointer to the function to be used to compare values.
  * Return: index of the first element for which the cmp function does not
  * return 0. Return -1 if no element matches or if size <= 0.
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, r;

	if (array == NULL || cmp == NULL)
	{
		return (EXIT_FAILURE);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		r = (*cmp)(array[i]);
		if (r != 0)
		{
			return (i);
		}
	}
	return (-1);
}
