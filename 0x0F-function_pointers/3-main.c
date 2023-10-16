#include "3-calc.h"
/**
 * main - entry of program
 * @argv: argument vector
 * @argc: argument count
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int (*oprt)(int, int);
	int n1, n2, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}
	result = oprt(n1, n2);

	printf("%d\n", result);
	return (0);
}
