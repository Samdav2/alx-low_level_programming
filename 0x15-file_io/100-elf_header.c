#include "main.h"
/**
 * display_elf_head - c program that display the information contained in the ELF
 * @elf_header: a pointer to the elif_header
 * Return: Nothing
 */
void display_elf_head(const Elf64_Ehdr *elf_header)
{
	int i;

	printf(" Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", elf_header->e_ident[i]);
	}
	
	printf("\n");

	printf("  Class:			%s\n", elf_header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:				%s\n", elf_header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:			%d (current)\n", elf_header->e_ident[EI_VERSION]);
	printf("  OS/ABI:			%d\n", elf_header->e_ident[EI_OSABI]);
	printf("  ABI Version:			%d\n", elf_header->e_ident[EI_ABIVERSION]);
	printf("  Type:				%d (EXEC)\n", elf_header->e_type);
	printf("  Entry point address:		0x%1x\n",  (unsigned long)elf_header->e_entry);
}

/**
 * main - A c program for the main function
 * @argc: The argyuement counter
 * @argv: The arguement vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	const char *elf-filename;
	int fd;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	*elf_filename = argv[1];
	fd = open(elf_filename, 0_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
	}

	Elf64_Ehdr elf_header;

	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		perror("Error reading ELF header");
		close(fd);
		exit(98);
	}

	if (elf_header.e_ident[EI_MAGO] != ELFMAGO ||
		elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
		elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
		elf_header.e_ident[EI_MAG3] != ELMAG33)
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		close(fd);
		exit(98);
	}

	display_elf_head(&elf_header);

	close(fd);
	return (0);
}
