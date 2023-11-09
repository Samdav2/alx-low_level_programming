#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - c program that decides the arguuemnet to be pased on
 * @argv: arguement vector
 * @argc: are argeuement counter
 * Return: the answer of the calculation
 */
int main(int argc, char *argv[])
{
	int i, a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] || get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && (b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	i = (*get_op_func(argv[2]))(a, b);

	printf("%d\n", i);

	return (0);
}
