#include "main.h"
/**
 * positive_or_negative - Prints if number is positive or negative
 * Return: 0(success)
 */
int main(void)
{
	int i;

	srand (time(0));

	i = read() - RAND_MAX / 2;
	
	if ( i > 0)
	{
	printf("%d is positive", i);
	}
	else
	{
	printf("%d is negative", i);
	}
	return (0);
}
