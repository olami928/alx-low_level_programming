#include "function_pointers.h"
/**
 * array_iterator - iterates through the whole array
 * @array: memory address
 * @size: size of the array
 * @action: memory address
 * Return: 0 on success
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
