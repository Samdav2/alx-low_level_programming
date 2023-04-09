#include "main.h"
/**
 * read_textfile - C functions that opens and read a text file
 * @filename: A pointer to the file to be open and read
 * @letters: The size or numbers of letters on the file
 *
 * Return: The number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	long int read;

	long int write;

	char *buffer;

	FILE *ptr;

	if (filename == NULL)
		return (0);

	ptr = fopen(filename, "r");
	if (ptr == NULL)
	{
		return (0);
	}

	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(ptr);

		return (0);
	}

	read = fread(buffer, sizeof(char), letters, ptr);
	if (read < 0)
	{
		read = 0;
	}

	write = fwrite(buffer, sizeof(char), read, stdout);
	if (write != read)
	{
	 read = 0;
	}
	free(buffer);
	fclose(ptr);
	return (read);
}
