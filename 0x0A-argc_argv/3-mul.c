#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - prints the multiple of two numbers
 * @argv: argument vector
 * @argc: argument count
 * atoi - converts a string to an integer
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
