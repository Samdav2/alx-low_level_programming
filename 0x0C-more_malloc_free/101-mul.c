#include "main.h"
/**
 * main - C program that multiplies two positive number
 * @argv: Arguement vector
 * @argc: Arguement Counter
 * Return: The the result in integers
 */
int main(int argc, char *argv[])
{
	int i;

	int num1, num2;
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 0; i < argc; i++)
	{
		if (atoi(argv[1]) < 0 || atoi(argv[1]) > 9)
		{
			printf("Error\n");
			exit(98);
		}
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul =  num1 * num2;

	printf("%d\n", mul);

	return (0);
}
