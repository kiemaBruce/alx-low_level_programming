## 0-print_name.c
- Prints a name
- Prototype: void print_name(char *name, void (*f)(char *));
## 1-array_iterator.c
- Executes a function given as a parameter on each element of an array.
- Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
- where size is the size of the array
- and action is a pointer to the function you need to use.
## 2-int_index.c
- Searches for an integer.
- Prototype: int int_index(int *array, int size, int (*cmp)(int));
- Where size is the number of elements in the array array.
- cmp is a pointer to the function to be used to compare values
- int_index returns the index of the first element for which the cmp function
  does not return 0
- If no element matches, it returns -1
- If size <= 0, it returns -1
