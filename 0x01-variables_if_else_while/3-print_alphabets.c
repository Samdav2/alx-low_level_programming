#include <stdio.h>
/**
 * main - This section does not takes in arguements
 * Return: 0(success)
 */
int main(void)
{
	char letter;
	
	for (letter = 'a'; letter <= 'z'; letter++)
		{
		putchar(letter);
		}
	for (letter = 'A'; letter <= 'Z'; letter++)
		{
		putchar(letter);
		}
		putchar('\n');
		return (0);
}
