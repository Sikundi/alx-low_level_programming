#include "main.h"

/**
 * get_endianness - checks endianness
 *
 * Return: If big endian - 0
 *         If little endian - 1
 */
int get_endianness(void)
{
	int n = 1;
	char *end = (char *)&n;

	n = 1;

	return (*end);
}
