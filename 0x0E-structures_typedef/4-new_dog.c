#include "dog.h"

/**
  * new_dog - creates a new dog.
  * @name: name of the dog.
  * @age: the age of the dog.
  * @owner: the owner of the dog.
  * Return: a pointer to the new struct dog.
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	char *n, *o;
	dog_t *ptr = NULL;

	ptr = malloc(sizeof(dog_t));
	if (name == NULL)
	{
		ptr->name = NULL;
	}
	else
	{
		n = malloc((getLength(name) + 1) * sizeof(char));
		if (n == NULL)
		{
			free(n);
			return (NULL);
		}
		ptr->name = n;
		for (i = 0; i <= getLength(name); i++)
			((*ptr).name)[i] = name[i];
	}
	ptr->age = age;
	if (owner == NULL)
	{
		ptr->owner = NULL;
	}
	else
	{
		o = malloc((getLength(owner) + 1) * sizeof(char));
		if (o == NULL)
		{
			free(o);
			return (NULL);
		}
		ptr->owner = o;
		for (i = 0; i <= getLength(owner); i++)
			((*ptr).owner)[i] = owner[i];
	}

	return (ptr);
}
/**
  * getLength - returns the length of a string.
  * @s: the string whose length is to be determined.
  * Return: the length of the string.
  */
int getLength(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
