#include "main.h"
/**
 * _strdup - Function that duplicate a string
 * @str: Holds a string
 * Return: A character or string
 */
char *_strdup(char *str)
{
	char *d;

	unsigned int i;

	unsigned int j;


	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)

	d = malloc(( i + 1) * sizeof(char));


	for (j = 0; j < i; j++)
	{
		d[j] = str[j];
	}

	d[i] = '\0';

	return (d);
}
