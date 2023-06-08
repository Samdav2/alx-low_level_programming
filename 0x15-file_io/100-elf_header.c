#include "main.h"
/**
 * main - C funtion that prints the information contained in the ELF header
 * Return: 0 for success
 */
int main(int elf_header, char *elf_filename)
{
	int ptr, ptr1;

	ptr = open(elf_filename, O_RDONLY);

	ptr1 = open(ptr, O_WRONLY, elf_header);

	printf("%s", ptr1);

	return(0);

}
