#include "main.h"
/**
 * print_bin - prints a binary rep of a num
 * @n: an unsigned long int
 * Return: (void)
 */
void print_bin(unsigned long int n)
{
	if (n == 0)
	{
		return;
	}
	print_bin(n >> 1);
	if ((n & 1) == 1)
	{
		printf("1");
	}
	if ((n & 1) == 0)
	{
		printf("0");
	}
}
/**
 * print_binary - prints a binary representation of a number
 * @n: an unsigned long int
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		printf("0");
	}
	else
	{
		print_bin(n);
	}
}
