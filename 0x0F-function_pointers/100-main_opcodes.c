#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that prints opcodes of it own main function
 * @argc: arguement counter
 * @argv: Vector
 * Return: Success
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
	printf("Error\n");
	return (2);
	}

	unsigned char *main_addr = (unsigned char *)main;

	for (i = 0; i < num_bytes; i++)
	{
	printf("%02x ", *(main_addr + i));
	}
	printf("\n");

	return (0);
}
