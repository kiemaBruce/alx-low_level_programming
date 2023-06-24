#include "main.h"

/**
  * _calloc - allocates memory for an array using malloc.
  * @nmemb: the number of elements in the array.
  * @size: the number of bytes to be allocated to each element.
  * Description: each element in the array is initialized to zero.
  * Return: a pointer to the allocated memory. If nmemb or size is 0, then
  * _calloc returns NULL. If malloc fails, then _calloc returns NULL.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr = NULL;
	int *a, *b;
	unsigned int i, j;

	(void)j;
	if (nmemb == 0 || size == 0)
		return (NULL);
	/* malloc each block */
	for (i = 0; i < nmemb; i++)
	{
		a = ptr + i;
		a = malloc(size);
		if (a == NULL)
			return (NULL);
		/* Store the address of the first block */
		if (i == 0)
			b = a;
	}
	/* Initialize all blocks to zero */
	for (i = 0; i < nmemb; i++)
	{
		*(b + i) = 0;
	}
	return ((void *)b);
}
