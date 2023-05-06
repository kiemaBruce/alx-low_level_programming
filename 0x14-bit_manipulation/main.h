#ifndef MAIN_H
#define MAIN_H

/**
  * struct binary_list - linked list that stores the bits of a decimal number.
  * @value: the bit, which can either be a 0 or a 1.
  * @index: starting from zero, the position of the bit in the linked list.
  * @next: pointer to the struct, which is used to point to the next node in
  * the list.
  */
struct binary_list
{
	int value;
	unsigned long int index;
	struct binary_list *next;
};
/**
  * bin_list - typedef for struct binary_list.
  */
typedef struct binary_list bin_list;

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

unsigned int binary_to_uint(const char *b);
int raise(int c, int n);
int getLength(const char *b);
int get_bit(unsigned long int n, unsigned int index);
bin_list *decimal_to_binary(unsigned long int n);
int list_len(bin_list *head);
bin_list *binEq(unsigned long int u);
void print_list(bin_list *h);
unsigned long int bin_length(unsigned int n);
int set_bit(unsigned long int *n, unsigned int index);
char *create_binary_string(bin_list *h, unsigned long int binLen);

#endif /* MAIN_H */
