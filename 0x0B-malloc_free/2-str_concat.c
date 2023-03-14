#include "main.h"
#include <stdlib.h>

/**
* str_concat - concatenates two strings
* @s1: string to be concatenated on
* @s2: string to be concatenated to s1
*
* Return: pointer to concatenated string
*         otherwise return NULL if it fails
*/
char *str_concat(char *s1, char *s2)
{
	char *con;
	int i, con_i = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	con = malloc(sizeof(char) * len);

	if (con == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		con[con_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		con[con_i++] = s2[i];

	return (con);
}
