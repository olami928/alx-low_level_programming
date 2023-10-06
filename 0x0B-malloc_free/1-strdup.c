#include "main.h"
/**
 * _strdup - The strdup() function returns a pointer
 * to a new string which is a duplicate of the string str
 * @str: the address of memory
 * return:  On success, the strdup() function returns a pointer
 * to the duplicated string.It returns NULL if insufficient
 * memory was available, with errno set to indicate the cause of the error.
 */
char *_strdup(char *str)
{
	int length, i;

	if (str == NULL)
	{
		return (NULL);
	}
	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	char *duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		duplicate[i] = str[i];
	}
	duplicate[length] = '\0';
	return (duplicate);
}
