#include "3-calc.h"

/**
  * get_op_func - determines the correct function to be executed.
  * @s: the operator that is used to determine the correct function.
  * Description: the function compares s with a list of operators in order to
  * determine the correct function that is to be returned (i.e., depending on
  * the operator.)
  * Return: a pointer to a function that takes two ints and returns an int.
  * (This function performs an operation on the two ints and returns the
  * result).
  */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	i = 0;
	/**
	  * go through each struct in the array of structs and if s matches
	  * the operator, return the corresponding function pointer from that
	  * same struct.
	  */
	while ((*(ops + i)).op != NULL)
	{
		if (strcmp(s, (*(ops + i)).op) == 0)
			return ((*(ops + i)).f);
		i++;
	}
	/* Return NULL if s does not match any of the 5 expected operators */
	return (NULL);
}
