#include "main.h"
/**
 * _strdup - A c program that returns a pointer a newly allocated memory in c
 * @str: A pointer to the new string
 * Return: A pointer to the duplicate string
 */
char *_strdup(char *str)
{
	int i;
	int lenght;
	char *pointer;

	if (str == NULL)
	{
		return (NULL);
	}

	lenght = strlen(str);

	pointer = malloc((lenght + 1) * sizeof(char));

	if (pointer == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < lenght; i++)
	{
		pointer[i] = str[i];
	}

	pointer[i] = '\0';
	return (pointer);
}
