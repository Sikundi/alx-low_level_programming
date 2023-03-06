#include "main.h"

/**
 * *_memset - function that fills memory
 * @s: filled with constant byte @b
 * @b: memory area pointer 
 * @n: number of bytes to be filled
 *
 * Return: A pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
