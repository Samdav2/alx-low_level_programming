#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * main - c program that find password for this program
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	char *s;

	s = (char *)malloc((argc - 1) * sizeof(char));

	for(i = 0; i <= argc; i++)
	{
		strcat(s, argv[i]);
	}

	FILE *file = fopen("101-password.txt", "w");

	fprintf(file, "%s", s);
	fclose(file);

	free(s);

	return (0);
}
