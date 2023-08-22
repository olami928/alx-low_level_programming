#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: The input string
 */
void print_rev(char *s)
{
    int len = 0;

    // Calculate the length of the string
    while (s[len] != '\0')
    {
        len++;
    }

    // Print the string in reverse
    for (int i = len - 1; i >= 0; i--)
    {
        _putchar(s[i]);
    }

    // Print a new line
    _putchar('\n');
}



