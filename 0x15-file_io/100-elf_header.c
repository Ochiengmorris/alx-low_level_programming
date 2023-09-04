#include "main.h"

void check_ifelf(unsigned char *e_ident);
void prints_magic(unsigned char *e_ident);
void prints_class(unsigned char *e_ident);
void prints_data(unsigned char *e_ident);
void prints_version(unsigned char *e_ident);
void prints_os_abi(unsigned char *e_ident);
void close_elf(int elf);

/***************** CHECK IFELF ***************/
/**
 * check_ifelf - Checks if a file is an ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */

void check_ifelf(unsigned char *e_ident)
{
	int ind;

	for (ind = 0; ind < 4; ind++)
	{
		if (e_ident[ind] != 127 &&
		    e_ident[ind] != 'E' &&
		    e_ident[ind != 'L' &&
		    e_ident[ind] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/************************ PRINT MAGIC **************************/
/**
 * prints_magic - Prints the magic numbers of an ELF header.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Magic numbers are separated by spaces.
 */

void prints_magic(unsigned char *e_ident)
{
	int ind;

	printf("  Magic:   ");

	for (ind = 0; ind < EI_NIDENT; ind++)
	{
		printf("%02x", e_ident[ind]);

		if (ind == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**************** PRINTCLASS *********************/
/**
 * prints_class - Prints the class of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void prints_class(unsigned char *e_ident)
{
	printf("  Class:                        ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/*********************** PRINT DATA *********************/
/**
 * prints_data - Prints the data of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void prints_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**************** PRINT_VERSION *******************/
/**
 * prints_version - Prints the version of an ELF header.
 *
 * @e_ident: A pointer to an array containing the ELF version.
 */
void prints_version(unsigned char *e_ident)
{
	printf("  Version:                           %d",
	       e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * prints_os_abi - Prints the OS/ABI of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.
 */
void prints_os_abi(unsigned char *e_ident)
{}


/****************** CLOSE_ELF ***************************/
/**
 * close_elf - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Description: If the file cannot be closed - exit code 98.
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/****************** MAIN *********************************/
/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 * @ac: The number of arguments supplied to the program.
 * @av: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: ...
 */
int main(int __attribute__((__unused__)) ac, char *av[])
{
	Elf64_Ehdr *header;

	int o, r;

	o = open(av[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", av[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", av[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", av[1]);
		exit(98);
	}

	check_ifelf(header->e_ident);
	printf("ELF Header:\n");
	prints_magic(header->e_ident);
	prints_class(header->e_ident);
	prints_data(header->e_ident);
	prints_version(header->e_ident);
	prints_os_abi(header->e_ident);

	free(header);
	close_elf(o);
	return (0);
}
