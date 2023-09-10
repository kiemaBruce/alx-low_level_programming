### 0-hash_table_create.c
- Contains a function that creates a hash table.
- Prototype: hash_table_t *hash_table_create(unsigned long int size);
	- where size is the size of the array
- Returns a pointer to the newly created hash table.
- If something goes wrong, the function returns NULL.
### 1-djb2.c
- Implements the djb2 algorithm.
- Prototype: unsigned long int hash_djb2(const unsigned char *str);
### 2-key_index.c
- Gives you the index of a key.
- Prototype: unsigned long int key_index(const unsigned char *key, unsigned long
int size);
	- where key is the key
	- and size is the size of the array of the hash table
- Uses the hash_djb2 written earlier.
- Returns the index at which the key/value pair should be stored in the array of
the hash table.
### 3-hash_table_set.c
- Adds an element to the hash table.
- Prototype: int hash_table_set(hash_table_t *ht, const char *key, const char
*value);
	- Where ht is the hash table you want to add or update the key/value to
	- key is the key. key can not be an empty string
	- and value is the value associated with the key. value must be
	duplicated. value can be an empty string.
- Returns: 1 if it succeeded, 0 otherwise
In case of collision, chaining is used and a new node is added at the beginning
of the list.
### 4-hash_table_get.c
- Retrieves a value associated with a key.
- Prototype: char *hash_table_get(const hash_table_t *ht, const char *key);
	- where ht is the hash table you want to look into
	- and key is the key you are looking for
- Returns the value associated with the element, or NULL if key couldn’t be
found.
### 5-hash_table_print.c
- Prints a hash table.
- Prototype: void hash_table_print(const hash_table_t *ht);
	- where ht is the hash table
- The key-value pairs are printed in the order they appear in the array of the
hash table.
- If ht is NULL, nothing is printed.
### 6-hash_table_delete.c
- Deletes a hash table.
- Prototype: void hash_table_delete(hash_table_t *ht);
	- where ht is the hash table.
