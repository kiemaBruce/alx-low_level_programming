## dog.h
- Defines a new type struct dog with the following elements:
	- name, type = char *
	- age, type = float
	- owner, type = char *
- As the header file, it also includes other function prototypes.
## 1-init_dog.c
- Initializes a variable of type struct dog.
- Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);
## 2-print_dog.c
- Prints a struct dog.
- Prototype: void print_dog(struct dog *d);
- If an element of d is NULL, it prints (nil) instead of this element. 
  (if name is NULL, it prints Name: (nil)).
- Prints nothing if the struct is NULL.
## 4-new_dog.c
- Creates a new dog.
- Prototype: dog_t *new_dog(char *name, float age, char *owner);
- Returns NULL if the function fails.
