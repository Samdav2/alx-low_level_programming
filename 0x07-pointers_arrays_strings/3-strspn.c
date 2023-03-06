#include "main.h"
/**
 * _strspn - Gets the lenght of a prefix substring
 * @s: String pointer
 * @accept: accept pointer
 * Return: integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ',')
		{
		break;
		}
		if (s[i] == accept[i])
		{
		i++;
		}
	}
	return (i);
}
