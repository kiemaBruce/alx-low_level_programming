#include "main.h"

/**
  * malloc_checked - allocates memory using malloc
  * @b: size to be allocated
  * Return: a pointer to the allocated memory. If it fails, normal process
  * termination occurs with a status value of 98
  */
void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == NULL)
	{
		free(x);
		exit(98);
	}
	return (x);
}
