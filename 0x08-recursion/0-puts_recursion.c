#include "main.h"
/**
 * author - dimeji
 * projrct - recursion
 */
/**
 *  _puts_recursion - function like puts()
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
