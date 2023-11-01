#include "main.h"
/**
 * strtow - C program that splits strings into words
 * @str: The string to turn into word
 * Return: The splits word
 */
char **strtow(char *str)
{
	int i;
	int j = 0;
	char **word;

	int lenght;

	if (str == NULL || str == "")
	{
		return(NULL);
	}

	word = malloc((lenght = strlen(s) + 1) * sizeof(char));

	for (i = 0; i < lenght;)
	{
		if( s[i] != ' ' && s[i] != '\0')
		{
			word[j] = s[i];
			j++;
		}

		else if(j > 0)
		{
			word[j] = '\0';
		}
		i++;
	}

	return (word);
}
