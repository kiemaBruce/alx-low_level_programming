#include "main.h"

/**
  * main - prints the number of arguments passed into it.
  * @argc: a count of arguments supplied to the program
  * @argv: an array of pointers to the strings, which are those arguments
  * Description: doesn't count the program name as an argument.
  * Return: EXIT_SUCCESS on success
  */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	/*(void)argv;*/
	printf("%d\n", argc - 1);
	return (EXIT_SUCCESS);
}
