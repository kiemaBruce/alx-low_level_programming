## 0-create_array.c
- Creates an array of chars, and initializes it with a specific char.
- Prototype: char *create_array(unsigned int size, char c);
- Returns NULL if size = 0
- Returns a pointer to the array, or NULL if it fails.
## 1-strdup.c
- Duplicates a string to a newly allocated space in memory.
- Prototype: char *_strdup(char *str);
- Returns NULL if str = NULL
- On success, it returns a pointer to the duplicated string.
- Returns NULL if insufficent memory was available.
## 2-str_concat.c
 - Concatenates two strings.
 - Returns a pointer to a newly allocated space in memory which contains the
   contents of s1, followed by the contents of s2, and null terminated.
 - If NULL is passed, it is treated as an empty string.
 - Returns NULL on failure.
## 3-alloc_grid.c
- Returns a pointer to a 2 dimensional array of integers.
- Prototype: int **alloc_grid(int width, int height);
- Each element in the array is initialized to 0.
- Returns NULL on failure.
- Return NULL if width or height is negative.
## 4-free_grid.c
- Frees a 2 dimensional grid previously created by the alloc_grid function.
- Prototype: void free_grid(int **grid, int height);
## 100-argstostr.c
- Concatenate all arguments of the program.
- Each argument is followed by '\n' in the new string.
- Prototype: char *argstostr(int ac, char **av);
