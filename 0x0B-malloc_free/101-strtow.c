#include "main.h"
/**
 * strtow - C program that splits strings into words
 * @str: The string to turn into word
 * Return: The splits word
 */
char **strtow(char *str)
{
	int numword = 0;
	int i;
	char **words;
	int wordindex = 0;
	int wordstart = 0;
	int wordlenght;
	int j;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if(str[i] != ' ')
		{
			numword++;
			while (str[i] != ' ' && str[i] != '\0')
			{
				i++;
			}
		}
	}
	words = (char **)malloc((numword + 1) * sizeof(char));
	if (words == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			wordstart = i;
			while (str[i] != ' ' && str[i] != '\0')
				{
					i++;
				}
			wordlenght = i - wordstart;
			words[wordindex] = (char *)malloc((wordlenght + 1) * sizeof(char));
			if (words[wordindex] == NULL)
			{
				for (j = 0; j < wordindex; j++)
				{
					free(words[j]);
				}
			free(words);
			return (NULL);
			}
			strncpy(words[wordindex], str + wordstart, wordlenght);
			words[wordindex][wordlenght] = '\0';
			wordindex++;
		}
	}
	words[numword] = NULL;

	return (words);
}
