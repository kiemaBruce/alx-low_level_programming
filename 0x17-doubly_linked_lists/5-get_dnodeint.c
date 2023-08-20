#include "lists.h"

/**
  * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
  * @head: the head of the linked list.
  * @index: the position of the node to be returned.
  * Return: the nth node or NULL if the node doesn't exist.
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	size_t u;

	if (head == NULL || index > dlistint_len((const dlistint_t *)head))
		return (NULL);
	temp = head;
	for (u = 0; u < index; u++)
	{
		temp = temp->next;
	}
	return (temp);
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
