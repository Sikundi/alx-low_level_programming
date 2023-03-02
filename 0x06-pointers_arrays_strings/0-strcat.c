#include "main.h"

/**
 * _strcat - concatenate(arrange/link) two strings
 * @dest: first character
 * @src: second character
 * Return: A pointer resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *g = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (g);
}
