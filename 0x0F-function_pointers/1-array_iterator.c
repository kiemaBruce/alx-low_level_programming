#include "function_pointers.h"

/**
  * array_iterator - executes a function given as a parameter
  * @array: pointer to the array
  * @size: size of the array
  * @action: the function to be executed
  * Description: the function given as a parameter is executed on each element
  * of the array
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
