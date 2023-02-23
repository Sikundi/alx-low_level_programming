#include "main.h"

/**
 * print_triangle - will print triangles
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int hh, ln;

	if (size > 0)
	{
		for (hh = 1; hh <= size; hh++)
		{
			for (ln = size - hh; ln > 0; ln--)
				_putchar(' ');

			for (ln = 0; ln < hh; ln++)
				_putchar('#');

			if (hh == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
