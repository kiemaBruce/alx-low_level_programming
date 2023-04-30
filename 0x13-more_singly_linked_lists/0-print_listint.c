#include "lists.h"

/**
  * print_listint - prints all the elements of a listint_t list.
  * @h: pointer to a listint_t list which is a constant.
  * Return: the number of nodes in the linked list.
  */
size_t print_listint(const listint_t *h)
{
	int x;
	unsigned int i;

	i = 0;

	while (h != NULL)
	{
		x = h->n;
		printf("%d\n", x);
		i++;
		h = h->next;
	}
	return (i);
}
