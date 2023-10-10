#include <stdio.h>
#include "dog.h"
/**
 * free_dog - free the dogs
 * @d: memory address
 * Return: 0 on success
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
