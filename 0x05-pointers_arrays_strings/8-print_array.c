#include "main.h"
#include <stdio.h>

/**
 * print_array - displays an array
 * @a: first interger
 * @n: number to be printed
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);

		if (x == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
