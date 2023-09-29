#include "main.h"
/**
 * _print_rev_recursion - reverses a string s and print to standard output
 * @s: string to be reversed
 * return (0); Always
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
