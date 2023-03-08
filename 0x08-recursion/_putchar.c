#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the charcter to c stdout
 * @c: character to print
 *
 * Return: on success 1, and -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
