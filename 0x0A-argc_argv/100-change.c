#include "main.h"

/**
  * main - prints the minimum number of coins to make change
  * @argc: a count of the number of arguments passed to the program
  * @argv : an array of pointers to strings; the strings are the arguments
  * passed arguments passed to your program is not exactly
  * to the program.
  * Description: for a given amount of money, the program determines the
  * minimum number of coins to make change. Available coins are 20, 10,
  * 5, 2 and 1. It prints Error if the number of arguments passed
  * isn't exactly one. If the argument is negative, the program prints 0.
  * Return: 1 if the number of arguments passed is not exactly 1. Return 0
  * otherwise.
  */
int main(int argc, char *argv[])
{
	int coins[5] = {25, 10, 5, 2, 1};
	/*int coins[5] = {1,2,5,10,25};*/
	int money, rem, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (money < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	i = 0;
	rem = money;
	while (rem > 0)
	{
		/*d = rem / largestCoin(coins, rem);*/
		rem = rem - largestCoin(coins, rem, 5);
		i++;
	}
	printf("%d\n", i);
	return (0);
}
/**
  * largestCoin - returns the largest coin that can be used to give change
  * @p: an array of the coins that can be used to give change
  * @moneyRemainder: the money to be evaluated in order to determine the
  * largest coin that can be used to give change for it.
  * @len: number of elements in the array of coins p
  * Return: the largest coin that can be used to give change for a certain
  * amount of money moneyRemainder
  */
int largestCoin(int p[], int moneyRemainder, int len)
{
	int i;

	for (i = 0; i < len; i++)
	{
		if ((moneyRemainder / p[i]) > 0)
		{
			break;
			/*return (p[i]);*/
		}
	}
	return (p[i]);
}
/*
 *int arrLen(int p[])
 *{
 *	return (sizeof(p) / sizeof(int));
 *}
 */
