#include "lists.h"

/**
  * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
  * @head: address of the head of the linked list.
  * @n: the value to be added to the new node.
  * Return: the address of the new element or NULL if it failed.
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;

		printf("Yes?\n");
	}
	else
	{
		temp = *head;
		while (1)
		{
			if (temp->next == NULL)
				break;
			temp = temp->next;
		}
		new->prev = temp;
		temp->next = new;
	}
	return (new);
}
