#include "main.h"

/**
 * _strpbrk - searches string for any set of bytes
 * @s: string to be searched
 * @accept: set of bytes to be located
 *
 * Return: If a set is matched a pointer to the matched byte else return null
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}

	return ('\0');
}
