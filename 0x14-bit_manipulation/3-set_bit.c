#include "main.h"

/**
 * set_bit - sets value of bit at nth index to 1
 * @n: pointer to bit
 * @index: index starting from 0 of bit to set
 *
 * Return: If success - 1
 *         If fail - -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
