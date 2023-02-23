#include "main.h"
/**
 * _islower - Function that checks for lowercas character
 * Return: 0(success)
 * @c: character to check if the lalue is higher or lower
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
