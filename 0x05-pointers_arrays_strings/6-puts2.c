#include <stdio.h>
#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first character
 * @str: The input string
 */
void puts2(char *str)
{
    int i = 0;

    // Iterate through the string, printing every other character
    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i += 2; // Move to the next character
    }

}  
