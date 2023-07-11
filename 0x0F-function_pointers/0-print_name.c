#include "function_pointers.h"

/**
  * print_name - prints a name
  * @name: pointer to the string to be printed
  * @f: a pointer to a function that takes as a parameter a pointer to a char
  * and returns nothing
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	(*f)(name);
}
