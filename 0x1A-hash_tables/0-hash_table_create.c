#include "hash_tables.h"

/**
  * hash_table_create - creates a hash table.
  * @size: the size of the array.
  * Return: pointer to the newly created hash table.
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;

	if (size == 0)
		return (NULL);
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	(*table).size = size;
	array = malloc(sizeof(hash_node_t) * size);
	if (array == NULL)
		return (NULL);
	(*table).array = array;
	return (table);
}
