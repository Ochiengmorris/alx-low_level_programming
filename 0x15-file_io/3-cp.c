#include "main.h"

void close_file(int fp);
char *makenew_buffer(char *file);

/**
 * makenew_buffer - Allocates 1024 bytes for a buffer.
 *
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */

char *makenew_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - Closes file descriptors.
 * @fp: The file descriptor to be closed.
 */

void close_file(int fp)
{
	int i;

	i = close(fp);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fp %d\n", fp);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 *
 * @ac: The number of arguments supplied to the program.
 * @av: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: ...
 */

int main(int ac, char *av[])
{
	int fro, to, w, r;
	char *buff;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = makenew_buffer(av[2]);
	fro = open(av[1], O_RDONLY);
	r = read(fro, buff, 1024);
	to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (r > 0)
	{
		if (fro == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", av[1]);
			free(buff);
			exit(98);
		}

		w = write(to, buff, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", av[2]);
			free(buff);
			exit(99);
		}

		r = read(fro, buff, 1024);
		to = open(av[2], O_WRONLY | O_APPEND);

	}

	free(buff);
	close_file(fro);
	close_file(to);

	return (0);
}
