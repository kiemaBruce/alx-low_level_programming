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
	int i, j, a;
	int **x;

	if (width < 0 || height < 0)
	{
		return (NULL);
	}
	/* Dynamically allocate space for all rows */
	x = malloc(sizeof(int) * height);

	if (x == NULL)
	{
		return (NULL);
	}
	printf("Hooray\n");

	/**
	  * Dynamically allocate space for each row element.
	  * Each row element has a size equal to the number of columns, which is
	  * the width
	  */
	for (a = 0; a < width; a++)
	{
		x[a] = malloc(sizeof(int) * width);
	}
	if (malloc(sizeof(int) * width) == NULL)
	{
		return (NULL);
	}
	/* initialize each array element to zero */
	for (j = 0; i < height; j++)
	{
		for (i = 0; i < width; i++)
		{
			x[j][i] = 0;
		}
	}
	return (x);
}
