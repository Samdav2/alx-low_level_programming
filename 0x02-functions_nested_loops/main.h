#include <stdio.h>
#include <unistd.h>
/**
 * main - prints letter a-z is smaller cases
 *Return: 0(success)
 */
int _putchar(char c);
void print_alphabet(void)
{
        char letter;

        for (letter = 'a'; letter <= 'z'; letter++)
                {
                _putchar(letter);
                }
                _putchar('\n');
             	return;
}
