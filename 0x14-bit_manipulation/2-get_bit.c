#include "main.h"

/**
 * get_bit - gets value of bit at nth index
 * @n: bit
 * @index:is index starting from 0
 *
 * Return: If error occured - -1
 *         Otherwise - value of bit at nth index
 */ 
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return(1);
}
