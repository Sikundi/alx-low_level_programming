#include "main.h"

/**
 * print_rev - display line in reverse
 * @s: character to be displayed
 */
void print_rev(char *s)
{
	int len, lin, half;
	char tmp;

	for (len = 0; s[len] != '\0'; len++)
	lin = 0;
	half = len / 2;

	while (half--)
	{
		tmp = s[lin];
		s[lin] = s[len - lin - 1];
		s[len - lin - 1] = tmp;
	}
}
