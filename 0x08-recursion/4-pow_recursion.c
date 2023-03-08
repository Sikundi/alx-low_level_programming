#include "main.h"

/**
 * _pow_recursion - raises value to power of given number
 * @x: base interger to be raised
 * @y: interger to raise to
 *
 * Return: if y < 0 return -1 else return result
 */
int _pow_recursion(int x, int y)
{
	int res = x;

	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
		return (1);

	else
		res *= _pow_recursion(x, y - 1);

	return (res);
}
