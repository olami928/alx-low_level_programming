#include "lists.h"
/**
 * _strlen - return the length of a string
 * @str: the pointer to the string
 * Return: the length
 */
int _strlen(const char *str)
{
	int i = 0;

	if (str == NULL)
	{
		return (0);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
