#include "main.h"

/**
 * clear_bit - sets value of bit at given ndex to 0
 * @n: pointer to the bit
 * @index: index from 0 to set value at
 *
 * Return: If error occurs - -1
 *         Otherwise - 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
