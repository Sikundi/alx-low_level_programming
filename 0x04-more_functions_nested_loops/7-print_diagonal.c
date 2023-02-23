#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times to be drawn
 */
void print_diagonal(int n)
{
	int dia, space;

	if (n > 0)
	{
		for (dia = 0; dia < n; dia++)
		{
			for (space = 0; space < dia; space++)
				_putchar(' ');
			_putchar('\\');

			if (dia == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
