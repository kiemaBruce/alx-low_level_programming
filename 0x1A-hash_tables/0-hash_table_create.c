#include "hash_tables.h"

/**
  * hash_table_create - creates a hash table.
  * @size: the size of the hash table that is to be created.
  * Return: pointer to the new table, or NULL if something goes wrong.
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **arr;
	unsigned long int *s, j;

	if (size == 0)
		return (NULL);
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	s = malloc(sizeof(unsigned long int));
	if (s == NULL)
	{
		free(table);
		return (NULL);
	}
	*s = size;
	table->size = *s;
	arr = malloc(sizeof(hash_node_t *) * size);
	if (arr == NULL)
	{
		free(table);
		free(s);
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		arr[j] = NULL;
	}
	table->array = arr;
	return (table);
}
