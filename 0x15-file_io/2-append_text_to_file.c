#include "main.h"
/**
 * append_text_to_file - a function that appends a text to the end of a file
 * @filename: A pointer to the file
 * @text_content: A pointer to the text content
 * Return: The number of int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t lenght;
	size_t written;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

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
