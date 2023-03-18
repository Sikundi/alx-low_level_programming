#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to memory previously given
 * @old_size: size in bytes for space allocated for ptr
 * @new_size: size in bytes for new memory block
 *
 * Return: if new_size == old_size - ptr
 *         if new_size == 0 and ptr is not NULL - NULL
 *         otherwise a pointer to new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *cptr, *old;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem = malloc(new_size);

		if (mem == NULL)
			return (NULL);

		return (mem);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	cptr = ptr;
	mem = malloc(sizeof(*cptr) * new_size);

	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}

	old = mem;

	for (i = 0; i < old_size && i < new_size; i++)
		old[i] = *cptr++;

	free(ptr);
	return (mem);
}
