#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position.
  * @head: pointer to the head of the linked list.
  * @idx: index of the list where the new node should be added, with the index
  * starting at 0.
  * @n: the data to be added into the new node.
  * Decsription: if it is not possible to add the new node at index idx, the
  * new node is not added.
  * Return: the address of the new node. If it fails, or if it is not possible
  * to add the new node at index idx, the function returns NULL.
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *h = NULL, *prev = NULL, *new = NULL;
	unsigned int i, len;

	i = 0;
	h = *head;
	len = listint_len(*head);
	if ((idx > (len - 1)) || (idx < 0))
	{
		return (NULL);
	}
	while (h != NULL)
	{
		if (i == idx)
		{
			new = malloc(sizeof(listint_t));
			new->n = n;
			if (new == NULL)
			{
				return (NULL);
			}
			if (i == 0)
			{
				new->next = *head;
				*head = new;
			} else
			{
				new->next = h;
				prev->next = new;
			}
			return (new);
		}
		prev = h;
		h = h->next;
		i++;
	}
	/* Incase list is empty (when h == NULL) */
	return (NULL);
}
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: header of the linked list
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i;

	i = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
