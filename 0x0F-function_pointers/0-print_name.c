#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints name
 * @name: given person's name
 * @f: points to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	f(name);

}
