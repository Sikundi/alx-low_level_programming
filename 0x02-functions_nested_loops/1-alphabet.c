#include "main.h"

/**
 * main - prints alphabet in lowercase
 *
 * Return; Always 0 (success)
 */
void print_alphabet(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);

	_putchar('\n');
}
