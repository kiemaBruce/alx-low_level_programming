## 0-binary_to_uint.c
- Converts a binary number to an unsigned int.
- Prototype: unsigned int binary_to_uint(const char *b);
- where b is pointing to a string of 0 and 1 chars.
- Returns the converted number or 0 if:
	- there is one or more chars in the string b that is not 0 or 1.
	- b is NULL.
## 1-print_binary.c
-  Prints the binary representation of a number.
- Prototype: void print_binary(unsigned long int n);
- No arrays, malloc or division (/ or %) is used.
## 2-get_bit.c
- Returns the value of a bit at a given index.
- Prototype: int get_bit(unsigned long int n, unsigned int index);
- where index is the index, starting from 0 of the bit you want to get.
- Returns: the value of the bit at index index or -1 if an error occured.
