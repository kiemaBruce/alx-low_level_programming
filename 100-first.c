#include "lists.h"

/**
  * execute_before_main - prints a message before main is executed.
  * Description: this is accomplished using the gcc attribute __attribute__
  * ((constructor)) which is included in the function declaration in the header
  * file.
  */
void execute_before_main(void)
{
	char *s;

	s = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";
	printf("%s", s);
}
