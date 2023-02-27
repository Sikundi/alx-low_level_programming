#include "main.h"

/**
 * _puts - prints string
 * @str: string to be displayed
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
