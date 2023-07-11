#include "lists.h"

/**
  * print_list - prints all the elements of a list_t list.
  * @h: head of the linked list
  * Return: the number of nodes in the linked list as an unsigned int
  */
size_t print_list(const list_t *h)
{
	char *d;
	unsigned int l, i;

	i = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		d = h->str;
		l = h->len;
		if (d == NULL)
		{
			l = 0;
			d = "(nil)";
		}
		printf("[%u] %s", l, d);
		i++;
		printf("\n");
		h = h->next;
	}
	return (i);
}
