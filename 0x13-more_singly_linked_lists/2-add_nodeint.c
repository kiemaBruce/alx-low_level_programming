#include "lists.h"

/**
  * add_nodeint - adds a new node at the beginning of a listint_t list.
  * @head: pointer to the head of the linked list
  * @n: the value to be added to the new node
  * Return: NULL if the operation fails. Otherwise it returns the address
  * of the new node.
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;

	if ((*head) == NULL)
	{
		new->next = NULL;
	} else
	{
		new->next = *head;
	}

	*head = new;
	return (new);
}
