#include "main.h"

/**
 * print_rev - display line in reverse
 * @s: character to be displayed
 */
void print_rev(char *s)
{
	int len = 0, lin;

	while (s[lin++])
		len++;

	for (lin = len - 1; lin >= 0; lin--)
		_putchar(s[lin]);

	_putchar('\n');
}
