#include "main.h"
#include <stdio.h>
/**
 * string_nconcat - Concatenate Two string
 * @s1: First String
 * @s2: Second String
 * @n - Number of Strig
 * Return: A string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;
	unsigned int x;
	unsigned int y;
	char *ptr;

	if (s1 == NULL)
		s1 ="";

	if (s2 == NULL)
		s2 ="";

	for (i = 0; s1[i] != '\0'; i++)
		j++;


	k = j + n;

	ptr = malloc((k + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);


	for (y = 0; y < i; y++)
	{
		ptr[i] = s1[y];
	}

	for (x = 0; x < n; y++, x++)
	{
		ptr[i] = s1[x];
	}

	ptr[i] = '\0';

	return (ptr);
}
