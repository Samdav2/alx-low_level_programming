#include "main.h"
/**
 * create_file - A C function that create
 * @filename: A pointer to the file to create
 * @text_content: A pointer to the file content
 *
 * Return: Success or other value
 */
int create_file(const char *filename, char *text_content)
{
	FILE *ptr;

	int i, w;

	if (ptr == NULL)
	{
		return (-1);
	}

	if (filename == NULL)
	{
		return (-1);
	}
	
	for (i = 0; *(text_content + i); i++)
		;

	ptr = fopen(filename, | O_CREATE | O_RDWR | O_TRUNC, 0600);

	w = write(ptr, text_content, i);

	if (ptr == -1 || w == -1)
		return (-1);

	fclose(ptr);

	return (1);
}
