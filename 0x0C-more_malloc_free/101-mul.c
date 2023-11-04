#include "main.h"
/**
 * isDigit - C program that check if an arguement is an integer or not
 * @str: a pointer to a string
 * Return: an int
 */

int isDigit(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
	}
	return (1);
}


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

	for (i = 0; i <= 2;)
	{
		if (!isDigit(argv[1]) || !isDigit(argv[2]))
		{
			printf("Error\n");
			exit(98);
		}
		i++;
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul =  num1 * num2;

	printf("%d\n", mul);

	return (0);
}
