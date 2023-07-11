#include "main.h"

/**
  * main - prints the name of the program
  * @argc: a count of arguments supplied to the program
  * @argv: an array of pointers to the strings, which are those arguments
  * Return: 0 on success
  */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (EXIT_SUCCESS);
}
