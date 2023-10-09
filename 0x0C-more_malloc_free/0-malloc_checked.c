#include "main.h"

/**
 * malloc_checked - cause normal process termination with a status value of 98
 * @b: allocated memory
 * Return: 0 on success
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
