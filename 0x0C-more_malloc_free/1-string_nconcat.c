#include "main.h"
/**
 * string_nconcat - C function that concatnate two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of words in the string to be copied
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	unsigned int lenght1, lenght2;
	unsigned int total = 0;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	lenght1 = strlen(s1);
	lenght2 = strlen(s2);
	total = lenght1 + n;
	pointer = (char *)malloc((total + 1) * sizeof(char));

	if (pointer == NULL)
	{
		return (NULL);
	}

	if (n >= lenght2)
		n = lenght2;

	for (i = 0; i < lenght1; i++)
	{
		pointer[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		pointer[i] = s2[j];
		i++;
	}

	pointer[i] = '\0';

	return (pointer);
}
