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
	int lenght;

	lenght = (strlen(s1) + strlen(s2));

	s1 = malloc((lenght + 1) * sizeof(char));

	while (*(s1 + i) != '\0')
	{
		i++;
	}

	while (j >= 0)
	{
		*(s1 + i) = *(s2 + j);
	
	if (*(s2 + j) == '\0')
	{
		break;
	}
	i++;
	j++;
	}
	s1[i + j] = '\0';
	return (s1);
	free (s1);
}
