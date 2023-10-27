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
		if (!isdigit(input[i]) && input[i] != '-' && input[i] != '+')
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

	if(argc == 0)
	{
		printf("0\n");
	}


	for(i = 1; i < argc; i++)
	{
		char *input = argv[1];
		if (isnumber(input))
		{
			b += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}


	printf("%d\n", b);

	return (0);
}
