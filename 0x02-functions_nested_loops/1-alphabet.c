#include "main.h"

/**
 * print_alphabet - entry point.
 *
 * Return: Always 0 success.
 */

void print_alphabet(void)
{
	char albet = 'a';

	while (albet <= 'z')
	{
		_putchar (albet);
		albet++;

	}
	_putchar ('\n');

}
