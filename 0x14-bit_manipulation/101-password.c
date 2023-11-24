#include "main.h"
/**
 * main - c program that find password for this program
 * Return: 0
 */
int main(char *argv[], int argc)
{
	int i;
	char *s;

	for(i = 0; i <= argc; i++)
	{
		s[i] = argv[i];
	}

	s[i] = '\0';

	FILE *101-password = fopen("output.txt", "w");

	fprintf(101-password, "%s", s);
	fclose(101-password);

	return (0);
}
