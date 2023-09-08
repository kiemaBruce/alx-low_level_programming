#include "hash_tables.h"

/**
  * key_index - gives you the index of a key.
  * @key: the key in a key-value pair.
  * @size: the number of elements in the hash table, that is, the size of the
  * array of the hash table.
  * Return: the index where the key-value pair is to be stored in the hash
  * table.
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_code, k_index;

	hash_code = hash_djb2(key);
	k_index = hash_code % size;
	return (k_index);
}
