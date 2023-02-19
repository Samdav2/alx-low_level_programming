#include <stdio.h>
/**
 * main - Recievs no arguement"
 * Return:0(success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		{
			putchar(letter);
			remove("qe");
			putchar('\n');
		}
	return (0);
}
