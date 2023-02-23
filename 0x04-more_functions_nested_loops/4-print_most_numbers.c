#include "main.h"

/**
 * print_most_numbers - prints most numbers except 2 and 4
 *
 * Return: ALways 0 (success)
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
			_putchar((num % 10) + '0');
	}

	_putchar('\n');
}
