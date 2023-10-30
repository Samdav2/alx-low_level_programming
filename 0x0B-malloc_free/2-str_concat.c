#include "main.h"
/**
 * str_concat - C function that concatenate two string
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: The pointer pointing to the new string and and old string
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *pointer;
	int lenght;

	lenght = (strlen(s1) + strlen(s2));

	pointer = malloc((lenght + 1) * sizeof(char));

	for (i = 0; s1 != NULL && s1[i] && '\0'; i++)
	{
		pointer[i] = s1[i];
	}

	for (i = 0; s2 != NULL && s2[j] != '\0'; j++)
	{

		pointer[i + j] = s2[j];
	}
	pointer[i + j] = '\0';
	return (pointer);
}
