#include "hash_tables.h"

/**
  * hash_table_delete - deletes a hash table.
  * @ht: pointer to the hash table that is to be deleted.
  */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *t2;
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if ((ht->array[i])->next == NULL)
			{
				free((ht->array[i])->key);
				free((ht->array[i])->value);
				free(ht->array[i]);
				continue;
			} else
			{
				temp = (ht->array[i]);
				while (temp != NULL)
				{
					free(temp->key);
					free(temp->value);
					t2 = temp->next;
					free(temp);
					temp = t2;
				}
			}
		}
	}
	free(ht->array);
	free(ht);
}
