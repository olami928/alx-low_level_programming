#include "main.h"
/**
 * _strlen_recursion - Returns length of string
 * @s: string
 * return(0); Always
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
