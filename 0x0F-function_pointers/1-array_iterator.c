#include "function_pointers.h"
/**
 * array_iterator - execute function on each element
 * of an array
 * @array: given array
 * @size: array size
 * @action: points to function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
	return;

	for (i = 0; i < (int) size; i++)
	{
		action(array[i]);
	}
}
