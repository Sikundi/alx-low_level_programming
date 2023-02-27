#include "main.h"

/**
 * _strlen - returns length of string
 * @s: character to be returned
 * Return: Always 0 (success)
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
