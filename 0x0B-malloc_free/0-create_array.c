#include "main.h"
#include <stdlib.h>

/**
 * create_array - makes an array of characters an
 *                initializes it with specific char
 * @size: size of the array
 * @c: character to initialize array array
 *
 * Return: a pointer to the array otherwise if == 0 or fails return null
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
