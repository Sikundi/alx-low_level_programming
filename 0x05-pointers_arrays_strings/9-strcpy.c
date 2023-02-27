#include "main.h"

/**
 * _strcpy - copies string pointed to
 * @dest: fiirst character
 * @src: second character
 * Return: the pointer
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';

	return (dest);
}
