#include "main.h"
/**
 * get_bit - gets the value of a bit at a given index
 * @index: index for the bit to be gotten
 * @n: an unsigned long int
 * Return: the value of index or -1 if it is greater than the given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > sizeof(size_t) * 8)
	{
		return (-1);
	}
	for (i = 0; i << index; i++)
	{
		n = n >> 1;
	}
	return ((n & 1));
}
