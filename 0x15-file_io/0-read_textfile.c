#include "main.h"
/**
 * read_textfile - C program that reads file and prints it to the POSIX
 * @filename: A pointer to the file
 * @letters: The size of the letters to be copied
 * Return: The size of the content in the file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buff[BUF_SIZE];
	size_t total = 0;
	size_t read;
	size_t bytes;
	size_t written;
	FILE *file;


	if (filename == NULL)
	{
		return (0);
	}

	file = fopen(filename, "r");
	if (file == NULL)
	{
		return (0);
	}

	while (letters > 0)
	{
		read = (letters > BUF_SIZE) ? BUF_SIZE : letters;

		bytes = fread(buff, 1, read, file);
		if (read <= 0)
		{
			break;
		}

		written = write(STDOUT_FILENO, buff, bytes);
		if (written != bytes)
		{
			fclose(file);
			return (0);
		}

		total += bytes;
		letters -= bytes;
	}

	fclose(file);
	return (total);

}
