#include "main.h"
/**
 * factorial -  makes value from 1 to n
 * @n: number
 * return: factorial of n, 0 if n is 1
 * -1 if n is less than 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
