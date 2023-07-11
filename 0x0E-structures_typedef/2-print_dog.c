#include "dog.h"

/**
  * print_dog - prints a struct dog.
  * @d: pointer to a variable of type struct dog.
  */
void print_dog(struct dog *d)
{
	char *name, *owner;
	float age;

	if (d == NULL)
		return;
	name = (*d).name;
	if (name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", name);
	age = d->age;
	printf("Age: %f\n", age);
	owner = (*d).owner;
	if (owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", owner);
}
