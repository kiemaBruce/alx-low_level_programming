#include "hash_tables.h"

/**
  * hash_table_print - prints a hash table.
  * @ht: pointer to the hash table that is to be printed.
  * Description: the function does nothing if ht is NULL.
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, c;
	hash_node_t *temp;

	(void)temp;
	c = 0;
	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (c != 0)
				printf(", ");
			c++;
			printf("'%s': '%s'", (ht->array)[i]->key, (ht->array[i])->value);
			if ((ht->array)[i]->next != NULL)
				temp = (ht->array[i])->next;
			else
				continue;
			while (temp != NULL)
			{
				if (c != 0)
					printf(", ");
				c++;
				printf("'%s': '%s'", temp->key, temp->value);
				temp = temp->next;
			}
		}
	}
	printf("}\n");
}
