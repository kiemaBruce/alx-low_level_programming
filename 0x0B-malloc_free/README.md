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
