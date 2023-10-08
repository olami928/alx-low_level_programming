#include "main.h"
/**
 * str_concat - concatenates two strings s1 and s2
 * @s1: memory address of pointer
 * @s2: memory address of pointer
 * Return: 0 on success
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2, len;
	char *result;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
		{
			len2++;
		}
	}
	len = len1 + len2;
	result = (char *)malloc(sizeof(char) * (len + 1));

	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len2; i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; j < len2; j++, i++)
	{
		result[i] = s2[j];
	}
	result[len] = '\0';
	return (result);
}
