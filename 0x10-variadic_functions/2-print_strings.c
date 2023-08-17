#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints string numbers
 * @separator: separates the strings.
 * @n: number count of parameters.
 *
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	char *s;

	va_list strng;

	va_start(strng, n);

	for (j = 0; j < n; j++)
	{
		if (separator != NULL)
		{
			if (j != 0)
			{
				printf("%s", separator);
			}
			s = va_arg(strng, char *);
			printf("%s", (s == NULL) ? "(nil)" : s);
		}
	}
	printf("\n");
	va_end(strng);
}
