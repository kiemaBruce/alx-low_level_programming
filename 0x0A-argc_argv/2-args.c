#include "main.h"

/**
  * main - prints all arguments it receives
  * @argc: a count of the arguments supplied to the program
  * @argv: an array of pointers to the strings which are those arguments
  * Description: only one argument is printed per line
  *
  * Return: EXIT_SUCCESS of succesful execution
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (EXIT_SUCCESS);
}
