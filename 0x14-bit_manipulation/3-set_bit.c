#include "main.h"
/**
 * set_bit - set the value of the bit to 0 or 1
 * @n: pointer to the bit
 * @index: position of the bit
 * Return: the given bit position
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > sizeof(unsigned int) * 8)
	{
		return (-1);
	}
	mask = 1;
	mask = mask << index;
	*n = (*n | mask);
	return (1);
}
