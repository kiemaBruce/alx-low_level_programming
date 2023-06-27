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
	dog_t *ptr = NULL;

	ptr = malloc(sizeof(dog_t));
	/*Store a copy of name inside the struct*/
	if (name == NULL)
	{
		ptr->name = NULL;
	}
	else
	{
		ptr->name = malloc((getLength(name) + 1) * sizeof(char));
		if (ptr->name == NULL)
			return (NULL);
		for (i = 0; i <= getLength(name); i++)
			((*ptr).name)[i] = name[i];
	}
	ptr->age = age;
	/*Store a copy of owner inside the struct*/
	if (owner == NULL)
	{
		ptr->owner = NULL;
	}
	else
	{
		ptr->owner = malloc((getLength(owner) + 1) * sizeof(char));
		if (ptr->owner == NULL)
			return (NULL);
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
