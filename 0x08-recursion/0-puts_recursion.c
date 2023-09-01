#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line using recursion
 * @s: The string to be printed
 *
 * Description: This function uses recursion to print each character of the
 * string @s until it reaches the null terminator ('\0'). After printing all
 * characters, a new line character ('\n') is printed to complete the output.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
        	putchar('\n');
        	return;
	}

	putchar(*s); 
	_puts_recursion(s + 1);
}

