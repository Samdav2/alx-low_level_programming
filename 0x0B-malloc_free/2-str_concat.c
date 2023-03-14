#include "main.h"
/**
 * str_concat - Concantenates two string
 * @s1: First String
 * @s2: second string
 * Return: A string or character
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	unsigned int i;
	unsigned int j;
	unsigned int k = 0;

	if (s1 == NULL || s2 == NULL)
	putchar('\0');

	for (i = 0; s1[i] != '\0'; i++)
	{
		for (j = 0; s2[j] != '\0'; j++)
			k++;
	}

	a = malloc((k + 1) * sizeof(char));
	a[k] = s1[i] + s2[j];
	free(a);
	a[k] = '\0';
	return (a);
}
