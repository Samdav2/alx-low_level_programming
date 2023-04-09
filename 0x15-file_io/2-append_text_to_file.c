#include "main.h"
/**
 * append_text_to_file - C function that appends text to file
 * @filename: A pointer to the file
 * @text_content: A pointer to the content in the file
 *
 * Return: 1 if the file exit and -1 if it does not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ptr, w, i;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	for (i = 0; text_content[i]; i++)
		;

	ptr = open(filename, O_WRONLY | O_APPEND);

	w = write(ptr, text_content, i);

	if (ptr == -1 || w == -1)
		return (-1);

	close(ptr);

	return (1);
}
