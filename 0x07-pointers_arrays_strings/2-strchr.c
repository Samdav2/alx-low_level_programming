#include "main.h"
/**
 * _strchr - locate a chatracter in a string
 * @s: A pointer
 * @c: A chracter
 * Return: character and string
 */
char *_strchr(char *s,  char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)

	if (s[i] == c)

	return (s + i);

	if (s[i] == c)
	
	return (s + i);

	return ('\0');
}
