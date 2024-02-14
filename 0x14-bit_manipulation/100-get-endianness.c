#include "main.h"
/**
 * get_endianness - checks the system byte order
 * Return: 0 if big endian and 1 if little endian
 */
int get_endianness(void)
{
	int x, lbg;

	x = 1;
	lbg = (int) (((char *))&x[0]);
	return (lbg);
}
