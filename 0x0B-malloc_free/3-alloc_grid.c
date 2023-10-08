#include "main.h"
/**
 * alloc_grid - Allocates two dimensional array of integers.
 * @grid: the address of the two dimensional array
 * @height: height of the array
 * @width: width of the array
 * return: Pointer to the allocated grid, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **array, i, j;
	int len = width * height;

	if (len <= 0)
	{
		return (NULL);
	}
	array = (int **)malloc(sizeof(int) * width);

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (i--; i>= 0; i--)
			{
				free(array[i]);
			}
			free(array);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
