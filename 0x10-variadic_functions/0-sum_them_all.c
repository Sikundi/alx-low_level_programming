#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of all numbers
 * @n: number of parameters passed
 *
 * Return: If n == 0 - 0
 *         Otherwise return sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list nums;

	va_start(nums, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
