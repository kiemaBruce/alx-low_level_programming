#include "main.h"

/**
  * main - prints the number of arguments passed into it
  * @argc: a count of arguments supplied to the program
  * @argv: an array of pointers to the strings, which are those arguments
  *
  * Return: EXIT_SUCCESS on success
  */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	/*(void)argv;*/
	printf("%d\n", argc);
	return (EXIT_SUCCESS);
}
