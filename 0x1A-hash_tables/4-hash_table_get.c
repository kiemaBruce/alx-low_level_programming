#include "hash_tables.h"

/**
  * hash_table_get - retrieves a value associated with a key.
  * @ht: pointer to the hash table where the value is to be retrieved
  * from.
  * @key: the key that is to be used to retrieve the value.
  * Return: the value if it is found, otherwise return NULL.
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash_code;
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL || key == NULL)
		return (NULL);
	hash_code = hash_djb2((const unsigned char *) key);
	index = hash_code % ht->size;

	if (ht->array[index] == NULL)
	{/* Not found */
		return (NULL);
	}
	if ((ht->array[index])->next == NULL)/* Just one node */
	{
		if (strcmp((ht->array[index])->key, (char *)key) == 0)
			return ((ht->array[index])->value);
		return (NULL);
	}
	/* Multiple nodes */
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, (char *)key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL); /* Not found */
}
