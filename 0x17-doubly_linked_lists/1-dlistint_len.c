#include "lists.h"

/**
  * dlistint_len - returns the number of elements in a linked dlistint_t list.
  * @h: head of the dlistint_t linked list.
  * Return: the number of elements.
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t r;
	dlistint_t *temp;

	r = 0;
	temp = (dlistint_t *)h;
	while (temp != NULL)
	{
		r++;
		temp = temp->next;
	}
	return (r);
}
