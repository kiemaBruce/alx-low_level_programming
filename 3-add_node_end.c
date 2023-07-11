#include "lists.h"

/**
  * add_node_end - adds a node at the end of a list_t linked list.
  * @head: pointer to the head of the list_t linked list.
  * @str: string that it to be duplicated and then stored inside the new node.
  * Return: address of the new element, or NULL if it failed.
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = NULL, *new = NULL;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (str == NULL)
	{
		new->str = strdup("(nil)");
		new->len = 0;
	} else
	{
		new->str = strdup(str);
		new->len = (unsigned int)getlength2((char *)str);
	}
	new->next = NULL;
	/**
	  * if *head == NULL it means that the the list is empty, i.e. has no
	  * nodes. Hence we make the head point to the newly created node.
	  * else means that the list has at least one node. Hence we traverse to
	  * the last node. Make it point to the new node and then return a
	  * pointer to the new node.
	  */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	/* else */
	temp = *head;
	while (1)
	{
		if (temp->next == NULL)
		{
			temp->next = new;
			break;
		}
		temp = temp->next;
	}
	return (new);
}
/**
  * getlength2 - returns the length of a string.
  * @s: the string whose length is to be determined.
  * Description: the terminating NULL byte is not counted.
  * Return: the length of the string.
  */
int getlength2(char *s)
{
	int l;

	l = 0;

	while (s[l])
		l++;
	return (l);
}
