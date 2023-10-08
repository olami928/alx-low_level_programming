#include "main.h"
/**
 * _strdup - duplicates a string
 * @str: the string to be duplicated
 * return: Pointer to the duplicated string, or NULL if insufficient  memory
 * is avaliable.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int length = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}
	duplicate = (char *)malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}
	return (duplicate);
}
