#include "dog.h"

/**
  * free_dog - frees dogs from the struct dog
  * @d: pointer to struct dog
  */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		free(d);
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
