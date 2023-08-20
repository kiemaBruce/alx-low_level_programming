#include "lists.h"

/**
  * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
  * @head: the head of the linked list.
  * @index: the position of the node to be returned.
  * Return: the nth node.
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	size_t u;

	if (head == NULL)
		return (NULL);
	temp = head;
	for (u = 0; u < index; u++)
	{
		temp = temp->next;
	}
	return (temp);
}
