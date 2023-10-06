#include <stdio.h>
/**
 * main - prints name of program
 * @argc: argument count
 * @argv: argument vector 
 * return 0;
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%s\n", argc - 1);
	return (0);
}
