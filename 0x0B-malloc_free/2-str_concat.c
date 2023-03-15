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
	char *b;
	unsigned int i;
	unsigned int j;
	unsigned int k;
	unsigned int s;
	unsigned int y;
	unsigned int z;

	if (s1 == NULL || s2 == NULL)
	putchar('\0');
	
	for (i = 0; s1[i] != '\0'; i++)
		y++;


	for (j = 0; s2[j] != '\0'; j++)
		z++;

	s = y + z;

	a = malloc((s + 1) * sizeof(char));
	b[i] = s1[i]
	a[j] = s2[j];
	a[j] = b[i]
	free(a);
	a[s] = '\0';
	return (a);
}
