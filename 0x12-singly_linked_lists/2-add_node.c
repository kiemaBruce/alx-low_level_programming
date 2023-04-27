#include "lists.h"

/**
  * add_node - adds a new node at the beginning of a list_t list.
  * @head: pointer to the head of the linked list list_t
  * @str: string to be duplicated and its memory address stored in the new node
  * Return: pointer to the new node
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		new->str = strdup("(nil)");
	}
	if (str != NULL)
	{
		new->str = strdup(str);
	}
	new->len = getLength(str);
	new->next = (*head);
	(*head) = new;
	return (new);
}
/**
  * getLength - determines the length of a string
  * @s: the string whose length is to be determined
  * Return: the length as an unsigned int
  */
unsigned int getLength(const char *s)
{
	int i;

	i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
