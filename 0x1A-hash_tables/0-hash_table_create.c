#include "hash_tables.h"

/**
  * hash_table_create - creates a hash table.
  * @size: the size of the hash table that is to be created.
  * Return: pointer to the new table, or NULL if something goes wrong.
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	hash_node_t *arr = NULL;
	unsigned long int *s;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	s = malloc(sizeof(unsigned long int));
	*s = size;
	table->size = *s;
	arr = calloc(size, sizeof(hash_node_t *));
	table->array = (hash_node_t **)arr;
	return (table);
}
