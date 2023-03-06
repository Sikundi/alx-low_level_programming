#include "main.h"

/**
 * _strchr - locates a charcter in a string
 * @s: the string to be searched
 * @c: charcter to be found
 *
 * Return: If c is found a pointer to first occurence else return null
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return ('\0');
}
