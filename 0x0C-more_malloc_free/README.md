## 0-malloc_checked.c
- Allocates memory using malloc.
- Prototype: void *malloc_checked(unsigned int b);
- Returns a pointer to the allocated memory
- If it fails, it causes normal process termination with a status value of 98.
## 1-string_nconcat.c
- Concatenates two strings.
- Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
- Returns a pointer to the newly allocated space in memory, which contains s1,
  followed by the first n bytes of s2, and null terminated. Returns NULL if it
  fails.
- If n is greater or equal to the length of s2 then the entire string s2 is
  used.
- If NULL is passed, it is treated as an empty string.
## 2-calloc.c
- Allocates memory for an array using malloc.
- Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
- The _calloc function allocates memory for an array of nmemb elements of size
  bytes each and returns a pointer to the allocated memory.
- The memory is set to zero.
- If nmemb or size is 0, then _calloc returns NULL.
- If malloc fails, then _calloc returns NULL.
