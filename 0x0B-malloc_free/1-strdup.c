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
	if (str == NULL)
		return (NULL);


	d = malloc(sizeof(char));
	free(d);

	while (str[i] != '\0')
	{
		d = str;
		printf("%s", d[i]);
		i++;
	}
	return (d);
}
