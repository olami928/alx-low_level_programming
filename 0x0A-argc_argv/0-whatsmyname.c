#include <stdio.h>
#include "main.h"
/**
 * main - this program prints its name.
 * @argv: an array of string containing the argument
 * @argc: number of commaND line
 * return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0 && argv[] != NULL)
		printf("The name of the program is : %s\n", argv[0]);
	else
		printf("The name of the program could not be determined\n");
	return (0);
}
