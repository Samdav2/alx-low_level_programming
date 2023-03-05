#include "main.h"
/**
 * cap_string - Coverts all words to capital letters
 * @str: Holds a string
 * Return: A string
 */
char *cap_string(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
	if (str[i] >= 'a' && str[i] <= 'z' && str[i - 1] == ' ')
	{
		str[i] -= 32;
	}
	else if (str[i - 1] == '\t' && str[i - 1] == '\n')
	{
		str[i] -= 32;
	}
	i++;
	}
	return (str);
}
