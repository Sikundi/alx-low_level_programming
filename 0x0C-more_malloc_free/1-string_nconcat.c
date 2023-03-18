#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - funcion that concatenates two strings
* @s1:first string
* @s2: second string
* @n: maximum number of bytes to be concatenated
*
* Return: A pointer to concatenated string otherwise NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *con;
	unsigned int i, len = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	con = malloc(sizeof(char) * (len + 1));

	if (con == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		con[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		con[len++] = s2[i];

	con[len] = '\0';

	return (con);
}
