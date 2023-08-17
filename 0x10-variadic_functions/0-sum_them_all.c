#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum the arguments in the function
 *
 * Return: the sum .
 * @n: the first variable int he function
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum_all = 0;
	unsigned int j;

	va_list val;

	va_start(val, n);

	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			int i = va_arg(val, const unsigned int);

			sum_all = sum_all + i;
		}
	}
	va_end(val);
	return (sum_all);
}
