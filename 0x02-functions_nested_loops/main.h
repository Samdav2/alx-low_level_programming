#include <stdio.h>
/**
 * main - prints letter a-z is smaller cases
 * Return: 0(success)
 */
void print_alphabet(void);
{
        char letter;

        for (letter = 'a'; letter <= 'z'; letter++)
                {
                putchar(letter);
                }
                putchar('\n');
             	return (0);
}
