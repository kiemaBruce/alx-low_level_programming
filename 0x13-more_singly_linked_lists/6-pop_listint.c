#include "lists.h"

/**
  * pop_listint - deletes the head node of a listint_t list.
  * @head: pointer to the head of the linked list.
  * Return: the head node's data (n), or 0 if the linked list is empty.
  */
int pop_listint(listint_t **head)
{
	int x;
	listint_t *temp = NULL;

	if ((*head) == NULL)
	{
		return (0);
	}
	x = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (x);
}
