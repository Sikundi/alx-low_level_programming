#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmeb: number of elements
 * @size: size of array elements in bytes
 *
 * Return: if nmeb and size = 0, or function fails - NULL
 *         otherwise return pointer to allocated memory
 */
void *_calloc(unsigned int nmeb, unsigned int size)
{
	char *a;
	unsigned int b;

	if (nmeb == 0 || size == 0)
		return ('\0');

	a = malloc(size * nmeb);

	if (a == NULL)
		return (NULL);

	for (b = 0; b < (nmeb * size); b++)
		a[b] = 0;

	return (a);
}
