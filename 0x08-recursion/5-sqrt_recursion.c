#include "main.h"
/**
 * _sqrt_recursion - makes possible to evaluate from n to 1
 * @n: number
 * return: square root of n
 * on error -1 is returned
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt_recursion(n));
	}
}
