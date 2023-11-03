#include "hash_tables.h"

/**
  * hash_table_get - retrieves a value associated with a key.
  * @ht: the hash table to be looked into.
  * @key: the key whose value is to be retrieved.
  * Return: the value associated with the element(key), or NULL if key couldn't
  * be found.
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *trav;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if ((ht->array)[index] == NULL)
		return (NULL);
	trav = (ht->array)[index];
	while (trav != NULL)
	{
		if (trav->key == key)
			return (trav->value);
		trav = trav->next;
	}
	return (NULL);
}
