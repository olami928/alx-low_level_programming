#include "main.h"
/**
 * is_prime_number - makes it easy to evaluate from 1 to n
 * @n: input integer
 * return: 1 if n is a prime number
 * 0 if it is otherwise
 */
int is_prime_number(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n % 1 == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_number(n));
	}
}
