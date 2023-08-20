#include "lists.h"

/**
  * print_dlistint - prints all the elements of a dlistint_t list.
  * @h: the head of the dlistint_t doubly linked list.
  * Return: the number of nodes in the dlistint_t list.
  */
size_t print_dlistint(const dlistint_t *h)
{
	int x;
	dlistint_t *temp;

	x = 0;
	temp = (dlistint_t *)h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		x++;
		temp = temp->next;
	}
	return (x);
}
