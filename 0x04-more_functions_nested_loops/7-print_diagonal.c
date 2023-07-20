#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Print diagonal line on integer n.
 * @n : The number of lines using '\' characters to use
 * Return: Void
 */
void print_diagonal(int n)
{
	int i;
	int gaps;

	for (i = 0; i < n; i++)
	{
		for (gaps = 0; gaps < i; gaps++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
