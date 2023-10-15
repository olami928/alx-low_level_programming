#include "function_pointers.h"
/**
 * int_index - checks for an index
 * @size: size of array
 * @array: memory address
 * @cmp: memory address
 * Return: 0 0n success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
				{
					return (i);
				}
				i++;
			}
		}
	}
	return (-1);
}
