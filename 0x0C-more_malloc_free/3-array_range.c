#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of intergers from min to max
 * @min: least value interger
 * @max: most value interger
 *
 * Return: If min > max || malloc fails - NULL
 *         Otherwise - pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *ptr, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = min++;

	return (ptr);
}
