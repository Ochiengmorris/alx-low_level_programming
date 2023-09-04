#include "main.h"

/**
 * create_file - ...
 *
 * @filename: A pointer to the name of the file.
 * @text_content: A pointer to a string to write
 *
 * Return: If the function fails - -1... Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int p, k;
	int lnth = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		{
			len++;
		}
	}

	p = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	k = write(p, text_content, lnth);

	if (p == -1 || k == -1)
		return (-1);

	close(p);

	return (1);
}
