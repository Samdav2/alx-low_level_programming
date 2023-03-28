#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Function that multiplies two numbers
 * @num1: First number
 * @num2: Second number
 * Return: Success
 */

int multiply(const char *num1, const char *num2);

int main(int argc, char *argv[])
{
	int i, result;

	if (argc != 3)
	{
		fprintf(stderr, "Error\n");
		exit(98);
	}

	for (i = 1; i <= 2; i++)
	{
		const char *num = argv[i];
		while (*num)
	{
		if (!isdigit(*num))
	{
		fprintf(stderr, "Error\n");
		exit(98);
	}
		num++;
	}
	}

	result = multiply(argv[1], argv[2]);
	printf("%d\n", result);

	return (0);
}

/**
 * multiply - Multiplies two number
 * @num1: First Number
 * @Num2: Second Number
 * Return: Success
 */
int multiply(const char *num1, const char *num2)
{
	int result = 0;

	while (*num1)
	{
	int digit1 = *num1 - '0';
	int carry = 0;
	const char *tmp = num2;

	while (*tmp)
	{
		int digit2 = *tmp - '0';
		int prod = digit1 * digit2 + carry;
		carry = prod / 10;
		prod %= 10;
		result += prod;
		tmp++;
	}
	if (carry)
	{
		result += carry;
	}
		num1++;
	}
	return result;
}
