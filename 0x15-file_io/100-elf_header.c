#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <elf.h>
#include <fcntl.h>

/**
 * print_elf_header_info - prnt inform ation of ELF header file.
 *
 * @header : input header file.
 *
 * Return: NUONE.
*/

void print_elf_header_info(const Elf64_Ehdr *header)
{
	int i;

	printf("Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");

	printf("Class: %s\n",
			(header->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
	printf("Data: %s\n",
			(header->e_ident[EI_DATA] == ELFDATA2LSB)
			? "2's complement, little endian" : "2's complement, big endian");
	printf("Version: %d\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", header->e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type: 0x%x\n", header->e_type);
	printf("Entry point address: 0x%lx\n", (unsigned long)header->e_entry);
}

/**
 * main - a program that displays the information
 * contained in the ELF header at the start of an ELF file.
 *
 * @argc : input number of arguments.
 * @argv : input arrey.
 *
 * Return: 0 or number ERROR.
*/

int main(int argc, char **argv)
{
	const char *filename;
	int fd;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	filename = argv[1];
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		perror("Error opening file");
		return (98);
	}
	Elf64_Ehdr header;

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		dprintf(STDERR_FILENO, "Error reading ELF header\n");
		close(fd);
		return (98);
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(STDERR_FILENO, "Not an ELF file\n");
		close(fd);
		return (98);
	}


	print_elf_header_info(&header);
	close(fd);
	return (0);
}

