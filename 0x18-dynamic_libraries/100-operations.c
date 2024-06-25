#include "main.h"
#include <stdio.h>

/**
 * add - returns the sum of two numbers
 * @a: the first num
 * @b: the second num
 * Return: 0 Always
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - returns the difference of two numbers
 * @a: the first num
 * @b: the second num
 * Return: 0 Always
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - returns the multiplication of two numbers
 * @a: the first num
 * @b: the second num
 * Return: 0 Always
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - returns the division of two numbers
 * @a: the first num
 * @b: the second num
 * Return: 0 Always
 */
int div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		return (0);
	}
}

/**
 * mod - returns the modulus of two numbers
 * @a: the first num
 * @b: the second num
 * Return: 0 Always
 */
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		return (0);
	}
}
