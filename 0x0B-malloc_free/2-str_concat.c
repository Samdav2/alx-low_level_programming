#include "main.h"
/**
 * str_concat - C function that concatenate two string
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: The pointer pointing to the new string and and old string
 */
char *str_concat(char *s1, char *s2)
{
	int lenght;
	char *pointer;

	lenght = (strlen(s1) + strlen(s2));

	pointer = malloc((lenght + 1) * sizeof(char));

	pointer = strcat(s1, s2);
	return (pointer);
}
