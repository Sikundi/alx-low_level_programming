#include "main.h"

/**
 * _memcpy - copies the memory area
 * @dest: memory area to copy to
 * @src: source to copy from
 * @n: number of bytes to copy
 *
 * Return: Pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

