#include "lists.h"

/**
  * free_list - frees a list_t list.
  * @head: head of the linked list to be freed
  */
void free_list(list_t *head)
{
	list_t *temp = NULL;

	while (head != NULL)
	{
		free(head->str);
		temp = head->next;
		free(head);
		head = temp;
	}
}
