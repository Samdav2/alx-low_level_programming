#include <stdio.h>
/**
 * main - Prints the number of arguements passed into it
 * @argc: Count the number of strings
 * @argv: The string
 * Return: An integer value
 */
int main(char argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
