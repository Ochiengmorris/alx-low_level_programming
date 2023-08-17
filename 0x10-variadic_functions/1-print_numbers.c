#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - to print numbers and a new line
 * @separator: separates numbers
 * @n: total elements
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j;

	va_list val;

	va_start(val, n);

	for (j = 0; j < n; j++)
	{
		int x = va_arg(val, int);

		printf("%d", x);
		if (separator != NULL)
		{
			if (j != (n - 1))
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(val);
}
