#include "dog.h"
/**
 * print_dog - print a structure for dog
 * @d: memory address to be returned
 * Return: 0 on success
 */
void print_dog(struct dog *d)
{
	if (d != 0)
	{
		if (!(d->name))
		{
			printf("Name : (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		if (!(d->age))
		{
			printf("Age: (nil)\n");
		}
		else
		{
			printf("Age: %f\n", d->age);
		}
		if (!(d->owner))
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
