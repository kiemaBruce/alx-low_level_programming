#ifndef dog_h
#define dog_h
/**
  * struct dog - simple structure for dog
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
int getLength(char *s);
#include <stdlib.h>
void print_dog(struct dog *d);
#include <stdio.h>
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void init_dog2(struct dog *d, char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* dog_h */
