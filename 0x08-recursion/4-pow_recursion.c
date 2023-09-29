#include "main.h"
/*
 * _pow_recursion - raise x to the power of y
 * @x: number
 * @y: number
 * return: pow of x and y
 * return: -1 if y is less than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
