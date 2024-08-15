 #include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using
 * binary search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: value to search for.
 * Description: the function assumes that the array is sorted in ascending
 * order. It also assumes that value won't appear more than once in the array.
 * Return: the index where value is located. If value isn't present in the
 * array or if array is NULL then the function returns -1.
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (binary_search_helper(array, size, value, 0, size - 1));
}
/**
 * binary_search_helper - recursively looks for a value in an array.
 * @array: pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: value to search for.
 * @start: the position (index) of the first element of array in the original
 * array.
 * @end: the position (index) of the last element of array in the original
 * array.
 * Return: the index of value if it is found within array. If it isn't found
 * then the function returns -1.
 */
int binary_search_helper(int *array, size_t size, int value,
		int start, int end)
{
	int mid, right_sub_start, right_sub_end, left_sub_start, left_sub_end,
	    sub_arr_size, r;

	print_arr(array, start, end); /* print current array */
	if (size % 2 == 0)
	{
		mid = ((int)size / 2) - 1 + start;
	} else
	{
		mid = (int)size / 2 + start;
	}
	if (array[mid] == value)
		return (mid);
	if (array[mid] < value) /* else */
	{
		/*Recursively search right sub-array*/
		/* First check if there is a right sub-array at all*/
		if (start == end) /* One element sub-array; no right sub-array */
			return (-1);
		right_sub_start = mid + 1;
		right_sub_end = end;
		if (right_sub_start > right_sub_end)
		{
			right_sub_start = right_sub_end;
		}
		sub_arr_size = (right_sub_end - right_sub_start) + 1;
		r = binary_search_helper(array, sub_arr_size, value,
				right_sub_start, right_sub_end);
	} else if (array[mid] > value)
	{
		/*Recursively search left sub-array*/
		if (start == end) /* One element sub-array; no left sub-array */
			return (-1);
		left_sub_start = start;
		left_sub_end = mid - 1;
		sub_arr_size = (left_sub_end - left_sub_start) + 1;
		r = binary_search_helper(array, sub_arr_size, value,
				left_sub_start, left_sub_end);
	}
	return (r);
}
/**
 * print_arr - prints a section of an array.
 * @array: pointer to the first element of the array to search in.
 * @start: the starting index of the section to be printed (inclusive).
 * @end: the eending index of the section to be printed (inclusive).
 */
void print_arr(int *array, int start, int end)
{
	int i;

	printf("Searching in array: ");
	for (i = start; i < end + 1; i++)
	{
		printf("%d", array[i]);
		if (i == end)
		{
			printf("\n");
		} else
		{
			printf(", ");
		}
	}
}
