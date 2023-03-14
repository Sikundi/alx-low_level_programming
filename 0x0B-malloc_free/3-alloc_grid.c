#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to a 2 dimensional array initialized to zero
 * @width: width of the two dimensional array
 * @height:height of the two dimensional array
 *
 * Return: if width || height <= 0, of functon fails return NULL
 *         otherwise return a pointer to the dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int hgt, wid;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (hgt = 0; hgt < height; hgt++)
	{
		array[hgt] = malloc(sizeof(int) * width);

		if (array[hgt] == NULL)
		{
			for (; hgt >= 0; hgt--)
				free(array[hgt]);

			free(array);
			return (NULL);
		}
	}

	for (hgt = 0; hgt < height; hgt++)
	{
		for (wid = 0; wid < width; wid++)
			array[hgt][wid] = 0;
	}

	return (array);
}
