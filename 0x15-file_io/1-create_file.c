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

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_RDWR | O_TRUNC, 0);
	if (fd < 0)
	{
		return (-1);
	}

	if (text_content)
	{
		written = write(fd, text_content, strlen(text_content));
		if (written < 0)
		{
			close(fd);
			return (-1);
		}
	}

	chmod(filename, S_IRUSR | S_IWUSR);

	close(fd);

	return (-1);
}
