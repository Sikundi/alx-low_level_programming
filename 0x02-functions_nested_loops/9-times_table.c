#include "main.h"

/**
 * times_table - Prints the multiplication table of 9
 *
 */
void times_table(void)
{
	int num, mlt, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

			for (mlt = 1; mlt <= 9; mlt++)
			{
				_putchar(',');
				_putchar(' ');

				prod = num * mlt;

				if (prod <= 9)
					_putchar(' ');
				else
					_putchar((prod / 10) + '0');

				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
	}
}
