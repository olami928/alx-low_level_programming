#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
    int length = 0;

    // Calculate the length of the string
    while (s[length] != '\0')
    {
        length++;
    }

    // Swap characters from the beginning and end of the string
    for (int i = 0; i < length / 2; i++)
    {
        char temp = s[i];
        s[i] = s[length - 1 - i];
        s[length - 1 - i] = temp;
    }
}

int main()
{
    char str[] = "Hello, world!";
    printf("Original string: %s\n", str);
    rev_string(str);
    printf("Reversed string: %s\n", str);
    return 0;
}

