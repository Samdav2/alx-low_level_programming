#include "main.h"
/**
 * _strstr - Function that locates a subscript
 * @haystack: Hold a string
 * @needle: Subscript
 * Return: A string
 */
char *_strstr(char *haystack, char *needle)
{
	char *n = needle;
	char *h = haystack;

	while (*h)
	{
		n = needle;
		h = haystack;

		while (*n)
		{
			if (*h == *n)
			{
				h++;
				n++;
			}

		else
			break;

		if (*n == '\0')

		return (haystack);
		haystack++;
		}
	}
	return (0);
}
