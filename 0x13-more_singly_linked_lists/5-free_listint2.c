#include "lists.h"

/**
  * free_listint2 - frees a listint_t list.
  * @head: pointer to the head of the list.
  * Description: after freeing the list, the function sets the head to NULL.
  */
void free_listint2(listint_t **head)
{
	listint_t *h = NULL;
	listint_t *temp = NULL;

	h = *head;
	if (h == NULL)
	{
		return;
	}
	while (h != NULL)
	{
		temp = h->next;
		free(h);
		h = temp;
	}
	*head = NULL;
}
