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
	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
	d = malloc(i * sizeof(char));
	free(d);
	}
	str = d;
	return (d);
}
