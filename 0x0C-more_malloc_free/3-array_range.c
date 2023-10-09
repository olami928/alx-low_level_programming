#include "main.h"
/**
 * array_range - Function create an array of integers.
 * @min: starting number.
 * @max: ending number.
 * Return: 0 on success
 */
int *array_range(int min, int max)
{
	int b;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	b = max - min;
	arr = (int *)malloc(sizeof(int) * (b + 1));

	if (!arr)
	{
		return (NULL);
	}
	while (max > min)
	{
		arr[b] = max;
		b--;
		max--;
	}
	arr[b] = min;
	return (arr);
}
