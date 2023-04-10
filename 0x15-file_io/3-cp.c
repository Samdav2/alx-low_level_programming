#include "main.h"

/**
 * __exit - C function that print error message with exit value
 * @error: The error number or file decriptor
 * @str: Name of the filename with error
 * f: The file descriptor
 *
 * Return: 0 for success
 */
int __exit(int error, char *str, int f)
{
	switch (error)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(error);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
		exit(error);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
		exit(error);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
		exit(error);
	default:
		return (0);
	}
}


/**
 * copy - C file that copy the content of a file to another
 * @argv: The arguement vector
 * @argc: The arguement counter
 *
 * Return 0 for success
 */
int copy(int argc, char *argv[])
{
	int j, k, ptr, ptr2;

	char *buffer[1024];


	if (argc > 3 || argc < 2)

		__exit(97, NULL, 0);


	ptr2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);

	if (ptr2 == -1)
		__exit(99, argv[2], 0);


	ptr = open(argv[2], O_RDONLY);

	if (ptr == -1)
		__exit(98, argv[1], 0);


	while ((j = read(ptr, buffer, 1024)) !=0)
	{
		if (j == -1)

			__exit(98, argv[1], 0);

		k = write(ptr2, buffer, j);
		if (k == -1)

			__exit(99, argv[2], 0);
	}

	close(ptr2) == -1 ? (__exit(100, NULL, ptr2)) : close(ptr2);
	close(ptr) == -1 ? (__exit(100, NULL, ptr)) : close(ptr);
	return (0);
}
