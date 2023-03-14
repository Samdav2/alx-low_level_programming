#include "main.h"
/**
 * _strdup - Function that duplicate a string
 * @str: Holds a string
 * Return: A character or string
 */
char *_strdup(char *str)
{
	char *d;

	int j = 1;


	if (str == NULL)
		return (NULL);


	d = malloc(j * sizeof(char));
	free(d);

	while (*str)
	{
		d= str;
		printf("%s", d + 1);
		str++;
	}
	return (d);
}
