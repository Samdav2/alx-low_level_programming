#include "main.h"
/**
 * create_file - c function that creates a file
 * @filename: A pointer to the filename
 * @text_content: The content of the file
 * Return: The number of files
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written;
	size_t lenght;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		lenght = 0;
		while (text_content[lenght] != '\0')
			lenght++;

		written = write(fd, text_content, lenght);

		if (written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (-1);
}
