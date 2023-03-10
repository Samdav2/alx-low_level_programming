#include "main.h"
/**
 * main - Holds arguements
 * @argc: The size of arquement
 * @argv: Arquement counter
 * Return: 0(success)
 */
int main(int argc, char* argv)
{
	int i;
	for (i = 0; i < argc; i++)
	{
	_putchar(argv[i]);
	_putchar('\n');
	}
	return (0);
}
