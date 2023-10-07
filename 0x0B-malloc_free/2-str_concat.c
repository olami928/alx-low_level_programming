#include "main.h"
/**
 * str_concat - concatenates two strings s1 and s2
 * @s1: memory address of pointer
 * @s2: memory address of pointer
 * return: Pointer to the concatenated string, or NULL on failure
 * and errno is set to identify error
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int lenght1 = 0;
	int length2 = 0;
	int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1 != '\0')
	{
		length1++;
	}
	while (s2 != '\0')
	{
		length2++;
	}
	concatenate = (char *)malloc(sizeof(char) * (length1 + length2 + 1));

	if (concatenate == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < lenth1; i++)
	{
		concatenate[i] = s1[i];
	}
	for (j = 0; j < length2; j++)
	{
		concatenate[i++] = s2[j];
	}
	concatenate[i] = '\0';
	return (concatenate);
}