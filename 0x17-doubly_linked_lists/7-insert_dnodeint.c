#include "lists.h"

/**
  * insert_dnodeint_at_index - inserts a new node at a given position.
  * @h: the address of the head of the linked list.
  * @idx: the index where we want the new node inserted.
  * @n: the value to be inserted in the new node.
  * Return: the address of the new node.
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	size_t x;

	if (*h == NULL || idx > dlistint_len((const dlistint_t *)*h))
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = *h;
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		(*h) = new;
	} else
	{
		for (x = 0; x < idx; x++)
		{
			temp = temp->next;
		}
		new->next = temp;
		new->prev = temp->prev;
		(temp->prev)->next = new;
		temp->prev = new;
	}
	return (new);
}
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
