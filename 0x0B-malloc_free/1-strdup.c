#include "main.h"
/**
 * _strdup - Function that duplicate a string
 * @str: Holds a string
 * Return: A character or string
 */
char *_strdup(char *str)
{
	char *d;

	unsigned int i = 0;

	unsigned int j = 1;

	unsigned int k = 0;


	if (str == NULL)
		return (NULL);


	d = malloc(j * sizeof(char));
	free(d);

	while (str[i] < '\0')
	{
		d[k] = str[i];
		putchar(d[k]);
		i++;
	}
	return (d);
}
