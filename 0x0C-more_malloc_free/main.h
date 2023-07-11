#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <string.h>
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
char *nullChecker(char *t);
int getLength(char *s);
void *_calloc(unsigned int nmemb, unsigned int size);
void print_buffer(char *s, int length);
void free_calloc(int *ptr, int size);

#endif /* MAIN_H */
