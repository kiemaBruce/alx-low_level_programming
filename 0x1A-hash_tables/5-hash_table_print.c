#include "hash_tables.h"

/**
  * hash_table_print - prints a hash table.
  * @ht: the hash table to be printed.
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, counter;
	hash_node_t *temp;

	if (ht == NULL)
		return;
	counter = 0;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if ((ht->array)[i] != NULL)
		{
			temp = (ht->array)[i];
			while (temp != NULL)
			{
				if (counter != 0)
					printf(", ");
				printf("'%s': '%s'", temp->key, temp->value);
				temp = temp->next;
				counter++;
			}
		}
	}
	printf("}\n");
}
