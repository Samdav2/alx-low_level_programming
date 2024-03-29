#include "main.h"
/**
 * str_concat - C function that concatenate two string
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: The pointer pointing to the new string and and old string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int lenght;
	char *pointer;
	unsigned int i;
	unsigned int j;

	lenght = (strlen(s1) + strlen(s2));
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	pointer = malloc((lenght + 1) * sizeof(char));
	if (pointer == NULL)
		return (NULL);

	for (i = 0; i < lenght; i++)
		pointer[i] = s1[i];

	for (j = 0; j < lenght; i++, j++)
		pointer[i] = s2[j];

	return (pointer);
}
