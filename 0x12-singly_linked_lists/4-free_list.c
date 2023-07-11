#include "lists.h"

/**
  * free_list - frees a list_t list.
  * @head: head of the linked list to be freed
  */
void free_list(list_t *head)
{
	while (head->next != NULL)
	{
		free(head);
		head = head->next;
	}
}
