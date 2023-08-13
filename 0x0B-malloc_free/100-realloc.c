#include <stdlib.h>
#include "main.h"
/**
  * _realloc - reallocates a memory block using malloc and free.
  * @ptr: pointer to the memory previously allocated with a
  * call to ``` malloc : malloc(old_size) ```.
  * @old_size: size in bytes allocated for ptr.
  * @new_size: size in bytes of new memory block.
  *
  * Return: pointer to new mem block, NULL or ptr.
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *tptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		tptr = malloc(new_size);
		if (tptr == NULL)
			return (NULL);
	}
	if (new_size > old_size && (ptr != NULL))
	{
		tptr = malloc(new_size);
		if (tptr == NULL)
			return (nptr);
		for (i = 0; i < old_size; i++)
			tptr[i] = *((char *)ptr + 1);
		free(ptr);
	}

	return (tptr);
}
