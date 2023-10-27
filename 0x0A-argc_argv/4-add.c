#include "main.h"
/**
 * isnumber - C function that checks if strings entered is a number or not
 * @input: checks for arguments that are number
 * Return: 1
 */
int isnumber(const char *input)
{
	int i;
	for (i = 0; input[i] != '\0'; i++)
	{
		if (input[i] < '0' || input[i] > '9')
		{
			return (0);
		}
	}

	return (1);
}

/**
 * main  - C programs that add integer arguement together
 * @argv: The arguement vector
 * @argc: Arguement counter
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int b = 0;

	for(i = 0; i < argc;)
	{
		char *input = argv[1];
		if (isnumber(input))
		{
			b += atoi(argv[i]);
		}
		else
		{
			printf("Error");
			return (i);
		}
		i++;
	}


	printf("%d", b);

	return (0);
}
