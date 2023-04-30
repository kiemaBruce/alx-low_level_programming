#include "lists.h"

/**
  * add_nodeint_end - adds a new node at the end of a listint_t list
  * @head: pointer to the head of the linked list.
  * @n: the value to be added to the new node.
  * Return: pointer to the new node, or NULL if it fails.
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL;
	listint_t *traverser = NULL;

	traverser = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	/* Set values of the new node */
	new->n = n;
	new->next = NULL;

	if ((*head) == NULL)
	{
		*head = new;
		/*return (new);*/
	} else
	{
		/* Traverse to the last node */
		traverser = malloc(sizeof(listint_t));
		traverser = *head;
		while (traverser->next != NULL)
		{
			traverser = traverser->next;
		}
		traverser->next = new;
	}
	free(traverser);
	return (new);
}
