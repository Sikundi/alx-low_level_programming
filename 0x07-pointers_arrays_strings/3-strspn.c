#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: string to be searched
 * @accept: bytes from
 *
 * Return: number of bytes only form accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int unt = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				unt++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (unt);
		}
		s++;
	}

	return (unt);
}
