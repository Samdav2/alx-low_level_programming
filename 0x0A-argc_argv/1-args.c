#include <stdio.h>
/**
 * main - Prints the number of arguements passed into it
 * @argc: Count the number of strings
 * @argv: The string
 * Return: An integer value
 */
int main(char argc __attribute__((unused)), char *argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%d\n", i);

	return (0);
}
