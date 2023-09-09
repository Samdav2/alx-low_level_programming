#include "main.h"
/**
 * main - Multiplies to number together
 * @argc: Count the arguements
 * @argv: The  vector of the arguement
 * Return: Nothing
 **/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error");
		exit(1);
	}

	else
	printf("%d", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
