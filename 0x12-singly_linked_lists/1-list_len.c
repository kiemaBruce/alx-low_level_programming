#include "lists.h"

/**
  * list_len - returns the number of elements in a linked list_t list.
  * @h: head of the linked list
  * Return: the number of elements as an unsigned int
  */
size_t list_len(const list_t *h)
{
	unsigned int i;

	i = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
