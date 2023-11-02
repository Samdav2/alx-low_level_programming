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
	unsigned int lenght1;
	unsigned int lenght2;
	unsigned int total = 0;
	unsigned int i;
	unsigned int j;

	lenght1 = strlen(s1);
	lenght2 = strlen(s2);
	total = lenght1 + lenght2;
	pointer = (char *)malloc((lenght + j) * sizeof(char));

	if (pointer == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < lenght1; i++)
	{
		pointer[i] = s1[i];

		if (pointer[i] == '\0')
		{
			for (j = 0; j < n; j++)
			{
				pointer[i] = s2[j];

				if (j == n || s2[j] == NULL)
				{
					pointer[i] = '\0';
					break;
				}

			}
		}
	
	}

	return (pointer);
}
