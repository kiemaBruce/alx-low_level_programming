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

#endif /* dog_h */
