#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: interger to be checked
 *
 * Return: Is 1 if it is a digit otherwise is 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
