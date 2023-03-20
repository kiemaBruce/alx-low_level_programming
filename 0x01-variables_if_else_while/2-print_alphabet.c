#include <stdio.h>

/**
  *main - Entry point
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	char a = 'a';
	
	while (a < 123)
	{
		printf("%c\n",a);
		a++;
	}
	return (0);
}
