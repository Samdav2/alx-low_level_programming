#include "main.h"
/**
 * main - C function that prints the file name
 * @argc: It count the  number of arguement
 * @argv: The vector or the arguement
 * Return: the file name
 */
int main(int argc, char *argv[])
{
	while (argc < 1)
	{
		printf("%s \n", *argv[0]);
	}

	return (0);
}
