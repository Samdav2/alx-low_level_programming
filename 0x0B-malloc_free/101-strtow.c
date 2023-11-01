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
	char *word;
	char **pointer;

	int lenght;

	if (str == NULL)
	{
		return(NULL);
	}

	word = malloc((lenght = strlen(str) + 1) * sizeof(char));
	pointer = (char **)malloc((lenght + 1) * sizeof(char));

	for (i = 0; i < lenght;)
	{
		if( str[i] != ' ' && str[i] != '\0')
		{
			word[j] = str[i];
			j++;
		}

		else if (j > 0)
		{
			word[j] = '\0';
			printf("%s/n", word);
			strcpy(pointer[0], word);
			return (pointer);
		}
		i++;
	}

	return (pointer);
}
