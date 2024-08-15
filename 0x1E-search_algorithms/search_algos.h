#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_search_helper(int *array, size_t size, int value, int start, int end);
void print_arr(int *arr, int start, int end);

#endif /* MAIN_H */
