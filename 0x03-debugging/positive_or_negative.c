#include "main.h"
/**
 * positive_or_negative - Prints if number is positive or negative
 * Return: 0(success)
 */
void positive_or_negative()
{
	int i;

	srand (time(0));

	i = rand() - RAND_MAX / 2;
	
	if ( i > 0)
	{
	printf("%d is positive", i);
	}
	else
	{
	printf("%d is negative", i);
	}
	putchar('\n');
	return;
}
