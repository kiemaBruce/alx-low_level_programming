#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

unsigned int binary_to_uint(const char *b);
int getlength(char *s);
int _raise(int x, int exp);
void print_binary(unsigned long int n);
int _putchar(char c);
unsigned long int _raiselong(int x, int exp);
int get_bit(unsigned long int n, unsigned int index);
char *binary_string(unsigned long int n, int flag);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned long int binary_to_ulongint(const char *b);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif /* MAIN_H */
