#include "main.h"

/**
* find_root - finds natural square root
* @num: number to find square root of
* @res: result to be tested
*/
int find_root(int num, int res)
{
	if ((res * res) == num)
	return (res);

	if ((res * res) > num)
	return (-1);

	return (find_root(num, res + 1));
}

/**
* _sqrt_recursion - returns natural square root
* @n: interger to find square root of
*
* Return: If doesn't have natural square root return -1 else reurn result
*/
int _sqrt_recursion(int n)
{
	int res = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_root(n, res));
}
