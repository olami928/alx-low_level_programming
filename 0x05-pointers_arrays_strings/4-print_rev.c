#include <stdio.h>
#include "main.h"
/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The string to be printed in reverse.
 *
 * Description: This function takes a string as input and prints its
 *              characters in reverse order to the standard output,
 *              followed by a new line character.
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	for (int i = length - 1; i >= 0; i--)
		putchar(s[i]);

		putchar('\n');
}

