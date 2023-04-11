#include "main.h"

/**
  * main - multiplies two numbers
  * @argc: a count of the arguments supplied to the program
  * @argv: an array of pointers to the strings which are those arguments
  * Description: prints the result if it receives two arguments, otherwise it
  * prints Error. A newline is printed afterwards for all cases
  *
  * Return: 0 if succesful and 1 if not
  */
int main(int argc, char *argv[])
{
	int p;

	if (argc == 3)
	{
		p = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", p);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
