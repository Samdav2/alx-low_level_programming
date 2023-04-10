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
	int i, j, k, ptr, ptr2;

	char *buffer[1024];

	for (i = 0; i < argc; i++)
		;

	if (argc > 3 || argc < 2)
	{
		exit(97);
		printf("usage: file_from to file_to");
	}



	ptr = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);

	ptr2 = open(argv[2], O_RDONLY);

	while ((j = read(ptr, buffer, 1024)) !=0)
	{
		if (j == -1)

			exit(98);

		k = write(ptr2, buffer, j);
		if (k == -1)

			exit(99);
	}




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
	close(ptr2);

	return (0);
}
