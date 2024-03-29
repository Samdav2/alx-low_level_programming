#include <stdio.h>
#include <stdlib.h>
/**
 * main - C program that prints the amount needed to change a currency
 * @argc: Arguement counter
 * @argv: Arguement vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int coins[] = {25, 10, 5, 2, 1};
	int numCoins = 0;
	int cents;

    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }

    cents = atoi(argv[1]);

    if (cents < 0)
    {
        printf("0\n");
        return (0);
    }


    for (i = 0; i < 5; i++)
    {
        while (cents >= coins[i])
	{
            cents -= coins[i];
            numCoins++;
        }
    }

    printf("%d\n", numCoins);

    return (0);
}
