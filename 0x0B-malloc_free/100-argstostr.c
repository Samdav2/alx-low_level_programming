#include "main.h"
/**
 * argstostr - c function that concatenates all the arguement of your program
 * @ac: Arguement counter
 * @av: Arguement vector
 * Return: The concatenate arguements
 */
char *argstostr(int ac, char **av)
{
	int i;
	char **pointer;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	pointer = malloc((ac) * sizeof(char));

	for (i = 0; i <= ac; i++)
	{
		pointer[i] = av[i];
	}
	return (pointer[i]);
}
