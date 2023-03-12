#include "main.h"
/**
 * _strpbrk - Search a string for any set of a byte
 * @s: string to search
 * @accept: string to compare
 * Return: A string
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
