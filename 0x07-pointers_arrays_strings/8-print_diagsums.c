#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints sums of two diagonals of square matrix intergers
 * @a: matrix of intergers
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int ind, sum1 = 0, sum2 = 0;

	for (ind = 0; ind < size; ind++)
	{
		sum1 += a[ind];
		a += size;
	}

	a -= size;

	for (ind = 0; ind < size; ind++)
	{
		sum2 += a[ind];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
