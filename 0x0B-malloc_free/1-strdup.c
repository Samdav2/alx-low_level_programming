#include "main.h"
/**
 * _strdup - Function that duplicate a string
 * @str: Holds a string
 * Return: A character or string
 */
char *_strdup(char *str)
{
	char *d;
	if (str = NULL)
		return (NULL);

	d = malloc(sizeof(char));
	d = str;
	free(d);
	return (d);
}
