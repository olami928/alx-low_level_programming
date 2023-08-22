#include "main.h"
#include <stdio.h>
/**
 * _strlen - Calculates the length of a string.
 * @s: Pointer to the string.
 *
 * This function takes a pointer to a string as a parameter and calculates the
 * length of the string (number of characters excluding the null terminator).
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{	
		length++;
		s++;
	}
	return (length);
}
