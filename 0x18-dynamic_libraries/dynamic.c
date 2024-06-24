#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

/**
 * _putchar - puts a char to stdout
 * @c: char 
 * Return: 0 Always
 */
int _putchar(char c)
{
	return (putchar(c));
}

/**
 * _islower - returns true if an char is in lowercase
 * @c: the char to be checked
 * Return: 0 Always
 */
int _islower(int c)
{
	return (islower(c));
}
/**
 * _isalpha - checks if a char is an alphabet
 * @c: the char to be checked
 * Return: 0 Always
 */
int _isalpha(int c)
{
	return (isalpha(c));
}
/**
 * _abs - returns the absolute num of n
 * @n: the number
 * Return: 0 Always
 */
int _abs(int n)
{
	int a = abs(n);

	return (a);
}
/**
 * _isupper - checks if a char is in uppercase
 * @c: char to be checked
 * Return: 0 Always
 */
int _isupper(int c)
{
	return (isupper(c));
}
/**
 * _isdigit - checks if a char is a digit
 * @c: the char to be checked
 * Return: 0 Always
 */
int _isdigit(int c)
{
	return (isdigit(c));
}
/**
 * _strlen - gets the length of a string
 * @s: pointer to the string
 * Return: 0 Always
 */
int _strlen(char *s)
{
	return (strlen(s));
}
/**
 * _puts - puts a char to stdout
 * @s: pointer to the string
 * Return: 0 Always
 */
void _puts(char *s)
{
	puts(s);
}
/**
 * _strcpy - copies the content of one string into another
 * @dest: pointer to the string
 * @src: pointer to the source string
 * Return: 0 Always
 */
char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}
/**
 * _atoi - convets a char into an integer
 * @s: char to be converted
 * Return: 0 Always
 */
int _atoi(char *s)
{
	int r = atoi(s);
	return (r);
}
/**
 * _strcat - concatenates two string
 * @dest - the first string pointer
 * @src: the second string pointer
 * Return: 0 Always
 */
char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
/**
 * _strncpy - copies a certain amount of char from a string
 * @dest: the first string pointer
 * @src: the second string pointer
 * @n: the number of chars
 * Return: 0 Always
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
/**
 * _strcmp - compares two string
 * @s1: the first string pointer
 * @s2: the second string pointer
 * Return: 0 Always
 */
int _strcmp(char *s1, char *s2)
{
	return (strcmp(s1, s2));
}
/**
 * _mesmet - mesmet a string
 * @s: pointer
 * @b: char
 * @n: unsigned integer
 * Return: 0 Always
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
/**
 * _memcpy - copies memory
 * @dest: the first pointer
 * @src: the second pointer
 * @n: unsigned int
 * Return: 0 Always
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
/**
 * _strchr - no documentation
 * @s: pointer
 * @c: integer
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
/**
 * _strspn - no documentation
 * @s: pointer
 * @accept: pointer
 * Return: 0 Always
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
/**
 * _strpbrk - no documentation
 * @s: pointer
 * @accept: pointer
 * Return: 0 Always
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
/**
 * _strstr - no documentation
 * @haystack: pointer
 * @needle: pointer
 * Return: 0 Always
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
