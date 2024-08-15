#include "search_algos.h"

/**
 * linear_search - searches for an element in an array using linear search
 * algorithm
 * @array: pointer to the first element of the array to be searched.
 * @size: the number of elements in the array.
 * @value: the number to be searched for in the array.
 * Return: The index of value in the array if it was found. If it wasn't found,
 * or if array is NULL then the function returns -1.
 */
int linear_search(int *array, size_t size, int value)
{
	int r, current_value;
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		current_value = *(array + i);
		printf("Value checked array[%ld] = [%d]\n", i, current_value);
		if (current_value == value)
		{
			r = i;
			break;
		}
		if (i == size - 1)
			r = -1;
	}
	return (r);
}
