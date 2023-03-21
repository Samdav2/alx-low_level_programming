#include <stdio.h>
#include <stdlib.h>
/**
 * mul - Multiplies two positive numbers
 * @argc: Arguement counter
 * @argv: The arguement
 * Return: Nothing
 */
int mul(int num1, char num2)
{
	int i;



	for (i = 0; i < num1; i++)
	{
		num2 = num2 + num2;
	}

	printf("%d\n", (int) num2);

	return (0);
}
