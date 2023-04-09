#include "main.h"
/**
 * copy - C file that copy the content of a file to another
 * @argv: The arguement vector
 * @argc: The arguement counter
 *
 * Return 0 for success
 */
int copy(int argc, char *argv[])
{
	int i, ptr;

	char *buffer[1024];

	char *l;

	for (i = 0; i < argc; i++)
		;

	if (argc > 3 || argc < 2)
	{
		exit(97);
		printf("usage: file_from to file_to");
	}


	l = argv[2];

	ptr = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);

	open(ptr, l, buffer, 1024);

	if (argv[1] == NULL)
	{
		exit(98);

		printf("%s Error: Can't read from the file", argv[1]);
	}

	if (!(argv[2]))
	{
		exit(99);
		printf("%s Error: Can't write to", argv[2]);
	}

	close(ptr);

	return (0);
}
