#include "lists.h"

/**
  * free_dlistint - frees a dlistint_t list.
  * @head: head of the linked list, i.e., the first node.
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
