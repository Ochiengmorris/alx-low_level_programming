#include <stdlib.h>
#include "main.h"


/**
 * read_textfile - Reads a text file and prints to stdout(POSIX).
 *
 * @filename: A pointer to the filename.
 * @letters: The number of letters function reads and prints.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         p/l  - ...
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t p, k, l;
	char *buff;


	if (filename == NULL)
	{
		return (0);
	}

	buff = malloc(letters * sizeof(char));
	if (buff == NULL)
	{
		return (0);
	}

	p = open(filename, O_RDONLY);
	k = read(o, buff, letters);
	l = write(STDOUT_FILENO, buff, k);

	if (p == -1 || k == -1 || l == -1 || l != k)
	{
		free(buff);
		return (0);
	}

	free(buffer);
	close(o);

	return (l);
}
