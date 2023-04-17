#include "dog.h"

/**
  * print_dog - prints a struct dog
  * @d: pointer to the struct dog
  */
void print_dog(struct dog *d)
{
	char *name;
	float age;
	char *owner;

	if (d == NULL)
	{
		return;
	}
	name = (*d).name;
	if (name == NULL)
	{
		printf("Name: (nil)\n");
	}
	printf("Name: %s\n", name);

	age = (*d).age;

	/**
	  *if (!age)
	  *{
	  *	  printf("Age: (nil)\n");
	  *}
	 */
	printf("Age: %f\n", age);

	owner = (*d).owner;
	if (owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	printf("Owner: %s\n", owner);
}
