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

	lenght = (strlen(s1) + strlen(s2));

	pointer = malloc((lenght + 1) * sizeof(char));

	for (i = 0; i < lenght; i++)
	{
		for( j = i; j < lenght; j++)
		{
			if(s1 == NULL || s2 == NULL)
			{
				return ("");
			}
			pointer[i] = s1[i];
			pointer[j] = s2[i];
		}
	}
	pointer[i] = '\0';
	return (pointer);
}
