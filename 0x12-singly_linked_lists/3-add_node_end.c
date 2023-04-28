#include "lists.h"

/**
  * add_node_end - adds a new node at the end of a list_t list.
  * @head: pointer to the head of the list_t linked list.
  * @str: string do be duplicated and its address stored inside the new node.
  * Return: pointer to the new node.
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last = NULL;
	list_t *new = NULL;

	if (head == NULL)
	{
		return (NULL);
	}
	*head = malloc(sizeof(list_t));
	last = last_element(head);
	if (last == NULL)
	{
		printf("NULL last pointer\n");
	}
	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	last->next = new;
	if (str == NULL)
	{
		new->str = strdup("(nil)");
	}
	if (str != NULL)
	{
		new->str = strdup(str);
	}
	new->len = getLength(str);
	new->next = NULL;
	free(*head);
	return (new);
}
/**
  * last_element - determines the last element of a list_t linked list
  * @headptr: pointer to the head of the linked list
  * Return: a pointer to the last element of a list_t linked list
  */
list_t *last_element(list_t **headptr)
{
	list_t *head = NULL;

	/*item = head->next;*/
	head = *headptr;

	while (head->next != NULL)
	{
		head = head->next;
	}
	return (head);
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
