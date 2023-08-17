#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_all - prints all float strings chars etc
*
* @format: formatting of course
*/
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int a = 0, start = 0;
	char *s;

	va_start(list, format);

	while (format && format[a] != '\0')
	{
		switch (format[a])
		{ case 'c':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%c", va_arg(list, int));
			break;
			case 'i':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%i", va_arg(list, int));
			break;
		case 'f':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%f", va_arg(list, double));
			break;
		case's':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			s = va_arg(list, char*);
			if (s)
			{ printf("%s", s);
			break; }
			printf("%p", s);
			break; }
		j++;
	}
	printf("\n");
	va_end(list);
