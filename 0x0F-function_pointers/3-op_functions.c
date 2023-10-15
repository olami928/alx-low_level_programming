#include "3-calc.h"
/**
 * op_add - addition operation
 * @a: memory address
 * @b: memory address
 * Return: 0 on success
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtraction operation
 * @a: memory address
 * @b: memory address
 * Return: 0 on success
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication operation
 * @a: memory address
 * @b: memory address
 * Return: 0 on success
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division operation
 * @a: memory address
 * @b: memory address
 * Return: 0 on success
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - modular operation
 * @a: memory address
 * @b: memory address
 * Return: 0 on succes
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
