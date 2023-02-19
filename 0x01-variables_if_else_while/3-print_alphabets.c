#include <stdio.h>
#include <ctype.h>
/**
 * main - This section does not takes in arguements
 * Return: 0(success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
		putchar(toupper(letter));
		putchar('\n');
		return (0);
}
