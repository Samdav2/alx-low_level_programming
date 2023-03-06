#include "main.h"
/**
 * leet - changes somes letter to numbers
 * @s: Holds a string
 * Return: A character
 */
char *leet(char *s)
{
	int i, j;

	char l[] = "aAtToOeElL";
	char n[] = "4477003311";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == l[j])
			{
				s[i] = n[j];
			}
		}
	}
	return (s);
}
