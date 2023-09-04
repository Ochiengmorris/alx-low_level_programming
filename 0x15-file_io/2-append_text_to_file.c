#include "main.h"

/**
 * append_text_to_file - Appends text at the end of the opened file.
 *
 * @filename: A pointer to the file name.
 *
 * @text_content: The string to add to the end of file.
 *
 * Return: If the function fails / filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1. Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int p, w;
	lnth = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (lnth = 0; text_content[lnth];)
		{
			lnth++;
		}
	}

	p = open(filename, O_WRONLY | O_APPEND);
	w = write(p, text_content, lnth);

	if (w == -1 || p == -1)
	{
		return (-1);
	}

	close(p);

	return (1);
}
