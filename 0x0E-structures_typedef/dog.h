#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a structure for dog
 * @name: name of dog
 * @owner: owner of dog
 * @age: age of drug
 * Return: 0 on success
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#endif /*DOD_H*/
