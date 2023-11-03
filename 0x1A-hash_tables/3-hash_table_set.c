#include "hash_tables.h"

/**
  * hash_table_set - adds an element to the hash table.
  * @ht: the hash table you want to add or update the key/value to.
  * @key: the key associated with the value. It cannot be an empty string.
  * @value: the value associated with the key. It can be an empty string and it
  * is duplicated.
  * Description: collisions are handled by adding a new node at the beginning
  * of the list.
  * Return: 1 if it succeeded and 0 otherwise.
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	if (strlen(key) == 0)
		return (0);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup((char *)key);
	if (new->key == NULL)
		return (0);
	new->value = strdup(value);
	if (new->value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if ((ht->array)[index] == NULL)
	{
		new->next = NULL;
		(ht->array)[index] = new;
	} else
	{
		new->next = (ht->array)[index];
		(ht->array)[index] = new;
	}
	return (1);
}
