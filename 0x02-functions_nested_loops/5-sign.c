#include "main.h"

/**
 * print_sign - prints the signs of a number
 * @n: interger to be checked
 *
 * Return: Is 0 when n>0, is 0 if n=0, is -1 if n<0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');

	return (0);
}
