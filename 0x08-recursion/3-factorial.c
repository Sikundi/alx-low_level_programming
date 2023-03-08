#include "main.h"

/**
 * factorial - returns factorial of number
 * @n: number to find factorial of
 *
 * Return: If n is > 0 return -1, to indicate error else return result
 */
int factorial(int n)
{
	int res = n;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		res *= factorial(n - 1);

	return (res);
	}
}
