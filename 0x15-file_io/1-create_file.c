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

	ptr = fopen(filename, "w");

	if (ptr == NULL)
	{
		return (-1);
	}

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content)
	{
		ptr = fopen(filename, "w");

	}
	
	ptr = fopen(filename, "w");
	dprintf("\0");

	return (1);
}
