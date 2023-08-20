#include "lists.h"

/**
  * sum_dlistint - returns the sum of all the data of a dlistint_t list.
  * @head: the head of the linked list.
  * Return: the sum.
  */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
