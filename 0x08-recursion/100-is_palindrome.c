#include "main.h"
/**
 * is_palindrome - checks for an empty string s
 * @s: string
 * return: 1 if string is palindrome\
 * 0 if it is not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	if (*s != '\0')
	{
		return (0);
	}
	else
	{
		return (is_palindrome(s));
	}
}
