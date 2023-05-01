#include "lists.h"

/**
 *sum_listint - gets the sum of all the data (n) of a listint_t linked list.
 *@head: head of the linked list.
 *Return: the sum.
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
