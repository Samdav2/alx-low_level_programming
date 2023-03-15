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
	unsigned int s;
	unsigned int y;
	unsigned int z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;


	for (j = 0; s2[j] != '\0'; j++)
		;

	s = i + j;

	a = malloc((s + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);

	for (y = 0; y < i; y++)
		a[y] = s1[y];

	for (z = 0; z < j; i++, z++)
		a[y] = s2[z];

	return (a);
}
