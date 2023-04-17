#include "dog.h"

/**
  * new_dog - creates a new dog.
  * @name: the name of the dog
  * @age: the age of the dog
  * @owner: the dog's owner
  * Return: a pointer to the struct dog type
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new;
	dog_t *pnew;

	pnew = &new;

	init_dog2(pnew, name, age, owner);
	if (pnew == NULL)
	{
		return (NULL);
	}
	return (pnew);
}
/**
 * init_dog2 - initializes a variable of type struct dog
 * @d: pointer to the struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog owner
 */
void init_dog2(struct dog *d, char *name, float age, char *owner)
{
	int nlen, ownlen, i;

	nlen = getLength(name);
	ownlen = getLength(owner);

	d->name = malloc(sizeof(char) * nlen);
	if ((d->name) == NULL)
	{
		return;
	}
	/* Copy name string to struct dog */
	for (i = 0; i < nlen; i++)
	{
		(d->name)[i] = name[i];
	}
	d->owner = malloc(sizeof(char) * ownlen);
	if ((d->owner) == NULL)
	{
		return;
	}
	/* Copy owner string to struct dog */
	for (i = 0; i < ownlen; i++)
	{
		(d->owner)[i] = owner[i];
	}

	/*(*d).name = name;*/
	d->age = age;
	/*(*d).owner = owner;*/
}
/**
 * getLength - determines the length of a string
 * @s: the string whose length is to be determined
 * Return: the length as an int
 */
int getLength(char *s)
{
	int i;

	i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
