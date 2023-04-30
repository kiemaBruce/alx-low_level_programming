#include "lists.h"

/**
  * listint_len - returns the number of elements in a linked listint_t list.
  * @h: header of the linked list
  * Return: the number of elements
  */
size_t listint_len(const listint_t *h)
{
	unsigned int i;

	i = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
