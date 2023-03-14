#include "main.h"
/**
 * _strdup - Function that duplicate a string
 * @str: Holds a string
 * Return: A character or string
 */
char *_strdup(char *str)
{
	char *d;

	int i = 0;

	int j = 1;


	if (str == NULL)
		return (NULL);


	d = malloc(j * sizeof(char));
	free(d);

	while (*str)
	{
		d[i] = str[i];
		putchar(d[i]);

		if (str[i] == '\0')
		break;
		i++;

	}
	return (d);
}
