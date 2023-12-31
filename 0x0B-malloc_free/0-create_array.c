#include "main.h"
/**
 * create_array - creates an array of chars, and initilaizes it with
 * a specific char
 * @c: the address of memory to print
 * @size: the size of memory to print
 * Return: 0 on success
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
