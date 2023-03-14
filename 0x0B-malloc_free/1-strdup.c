#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to a new string
*           which is a duplicate of the string str
* @str: string to be used
*
* Return: on success return pointer to duplicated string
*         otherwise return null if fails or str == NULL
*/
char *_strdup(char *str)
{
	char *dupl;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	dupl = malloc(sizeof(char) * (len + 1));

	if (dupl == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dupl[i] = str[i];

	dupl[len] = '\0';

	return (dupl);
}
