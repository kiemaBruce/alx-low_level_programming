#include "main.h"

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int a = 0;
	/* int mod;*/
	/* print_alphabet(); */
	/* print_alphabet_x10(); */
	/* printf("%d", _isalpha(a)); */
	/* print_sign(a); */
	/* printf("%d",_abs(a)); */
	/* printf("%d",print_last_digit(a)); */

	/*
	a = print_last_digit(-88);
	_putchar('0' + a);
	_putchar('\n');
	*/

	a = print_last_digit(INT_MIN);
	/* printf("%d",INT_MIN * -1);*/
	putchar('0' + a);
	putchar('\n');

	/* printf("%d", add(9,10)); */
	/* print_to_98(105); */
	/* times_table(); */
	return (0);
}
