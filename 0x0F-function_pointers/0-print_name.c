#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: memory address
 * @f: memory adress
 * Return: 0 on success
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
