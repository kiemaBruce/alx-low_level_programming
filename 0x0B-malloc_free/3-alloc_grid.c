#include "main.h"

/**
  * alloc_grid - returns a pointer to a 2 dimensional array of integers
  * @width: the number of columns in the 2d array
  * @height: the number of rows in the 2d array
  * Description: each element in the array is initialized to zero.
  *
  * Return: NULL on failure or if either height or width is negative. Otherwise
  * return a pointer to a pointer, i.e., a pointer to the 2d array.
  */
int **alloc_grid(int width, int height)
{
	int i, b;
	int **arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	/* Array of pointers */
	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	/* One dimensional array of ints */
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			/* Free all previously allocated memory on malloc fail */
			for (b = i; b >= 0; b--)
			{
				free(arr[i]);
			}
			free(arr);
			return (NULL);
		}
	}
	return (arr);
}
