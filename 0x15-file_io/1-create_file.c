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
	
	int i, w, ptr;


	if (filename == NULL)
	{
		return (-1);
	}

	if (!text_content)
		text_content = "";
	
	for (i = 0; *(text_content + i); i++)
		;

	ptr = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	w = write(ptr, text_content, i);

	if (ptr == -1 || w == -1)
		return (-1);

	close(ptr);

	return (1);
}
