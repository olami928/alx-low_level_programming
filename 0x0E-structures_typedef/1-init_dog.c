#include "dog.h"
/**
 * init_dog - initializes a variable of dog
 * @d: memory address to be returned
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: 0 on success
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
