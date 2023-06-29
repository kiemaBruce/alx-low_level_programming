#include "3-calc.h"

/**
  * main - executes the correct operation on the arguments provided.
  * @argc: the number of arguments that are provided.
  * @argv: an array of pointers to chars (which may also be called strings),
  * that are the command line arguments passed to the program.
  * Description: the function checks for anomalies such as incorrect number of
  * arguments, invalid operator, or an attempt to divide (/ or %) by 0, and
  * prints "Error" and exits with an error code.
  * Return: 0 on success. On failure it doesn't return a value but instead
  * exits.
  */
int main(int argc, char *argv[])
{
	int res;
	int (*f)(int, int);

	/* Check for correct number of arguments */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	f = get_op_func(argv[2]);
	/* Operator is not among the expected operators */
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	} else
	{
		/* Attempting to '5' or '/' by zero */
		if ((f == op_div || f == op_mod) && atoi(argv[3]) == 0)
		{
			printf("Error\n");
			exit(100);
		}
		res = f(atoi(argv[1]), atoi(argv[3]));
		printf("%d\n", res);
	}
	return (0);
}
