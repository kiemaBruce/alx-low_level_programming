#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdlib.h>
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
int getLength(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif /* MAIN_H */
