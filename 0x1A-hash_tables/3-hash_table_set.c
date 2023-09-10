#include "hash_tables.h"

/**
  * hash_table_set - adds an element to the hash table.
  * @ht: pointer to the hash table.
  * @key: key of the new element.
  * @value: value of the new element.
  * Return: 1 if successful and 0 if not successful.
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *temp;
	unsigned long int index, hash_code, c;

	if (key == NULL || strlen(key) == 0 || ht == NULL)
		return (0);
	new = create_new_node(key, value);
	if (new == NULL)
		return (0);
	c = 0; /* Used later to determine whether a key ws found */
	hash_code = hash_djb2((const unsigned char *)key);/* Get index*/
	index = hash_code % ht->size;
	if (ht->array[index] == NULL) /* Empty bucket */
	{
		new->next = NULL;
		ht->array[index] = new;
	} else
	{ /* Not empty; update value for key or perform chaining for new key */
		temp = (ht->array)[index];/*Search for the key in branch*/
		while (temp != NULL)
		{
			if (strcmp(temp->key, key) == 0)
			{/* Update the value if the key is found */
				free(temp->value); /*Free old value*/
				temp->value = (char *)strdup(value);
				if (temp->value == NULL)
					return (0);
				c = 1;
				break;
			}
			temp = temp->next;
		}
		if (c == 0) /* Key not found; add it to the linked list */
		{
			new->next = (ht->array[index]);
			(ht->array[index]) = new;
		}
	}
	return (1);
}
/**
  * create_new_node - creates a new node to be added to the hash table.
  * @key: the key of the new node.
  * @value: the value of the new node.
  * Return: pointer to the new node if it is successful, otherwise it returns
  * NULL.
  */
hash_node_t *create_new_node(const char *key, const char *value)
{
	hash_node_t *new = NULL;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);
	/* Not sure if I should replace a NULL string with an empty one */
	if (value == NULL)
	{
		value = strdup("");
	} else
	{
		value = strdup(value);
		if (value == NULL)
			return (NULL);
	}
	key = strdup(key);
	if (key == NULL)
		return (NULL);
	new->key = (char *)key;
	new->value = (char *)value;
	return (new);
}
