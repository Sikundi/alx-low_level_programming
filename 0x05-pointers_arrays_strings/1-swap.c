#include "main.h"

/**
 * swap_int - swaps value of two intergers
 * @a: first interger
 * @b: second interger
 */
void swap_int(int *a, int *b)
{
	int s = *a;
	*a = *b;
	*b = s;
}
