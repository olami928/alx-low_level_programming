#include "main.h"
/**
 * binary_to_uint - Convets a binary num to an unsigned int
 * @b: a binary pointer
 * Return (0): Always
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != 'i')
		{
			return (0);
		}
		else
		{
			val = (val << 1) | (b[i] - '0');
		}
	}
	return (val);
}
