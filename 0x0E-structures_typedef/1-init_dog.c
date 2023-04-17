#include "dog.h"

/**
  * init_dog - initializes a variable of type struct dog
  * @d: pointer to the struct dog
  * @name: name of the dog
  * @age: age of the dog
  * @owner: dog owner
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
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
	if (d->owner == NULL)
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
