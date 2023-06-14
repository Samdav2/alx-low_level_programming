#include "main.h"
/**
 * main - C functions that print all arguements it recieves
 * @argv: The arguement vector
 * @argc: The arguement counter
 * Return: Nothing
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
