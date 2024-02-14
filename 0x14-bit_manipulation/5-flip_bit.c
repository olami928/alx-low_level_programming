#include "main.h"
/**
 * flip_bits - flips the number of bit from one number to another
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: the flipped beat
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned long int count;

	result = n ^ m;
	for (count = 0; result > 0;)
	{
		if ((result & 1) == 1)
		{
			count++;
		}
		result = result >> 1;
	}
	return (count);
}
