#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
int getLength(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
int get_total_length(int ac, char **av);
char **strtow(char *str);
int wordcounter(char delim, char *s);
int *wordlengths(char delim, char *s);
void print_sarray(int *array);
int arrcount(int *a);

#endif /* MAIN_H */
