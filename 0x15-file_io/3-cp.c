#include "main.h"

/**
 * __exit - C function that print error message with exit value
 * @error: The error number or file decriptor
 * @s: Name of the filename with error
 * @fd: The file descriptor
 *
 * Return: 0 for success
 */
int __exit(int error, char *s, int fd)
{
	switch (error)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(error);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
		exit(error);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
		exit(error);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(error);
	default:
		return (0);
	}
}


/**
 * main - C file that copy the content of a file to another
 * @argv: The arguement vector
 * @argc: The arguement counter
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int j, k, ptr, ptr2;

	char *buffer[1024];


	if (argc !=  3)

		__exit(97, NULL, 0);


	ptr2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);

	if (ptr2 == -1)
		__exit(99, argv[2], 0);


	ptr = open(argv[1], O_RDONLY);

	if (ptr == -1)
		__exit(98, argv[1], 0);


	while ((j = read(ptr, buffer, 1024)) != 0)
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
