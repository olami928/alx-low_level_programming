#include "main.h"
/**
 * print_binary - prints a binary representation of a number
 * @n: an unsigned long int
 * Return (0); Always
 */
void print_binary(unsigned long int n)
{
	unsigned long int val;
	int moves;

	if (n == 0)
	{
		printf("0");
	}
	for (val = n; moves = 0; (temp >>= 1) > 0; moves++)
		;
	for (; moves >= 0; moves--)
	{
		if ((n >> moves) & 1)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
}
