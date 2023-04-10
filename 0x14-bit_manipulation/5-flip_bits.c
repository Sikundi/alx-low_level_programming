#include "main.h"

/**
 * clear_bit - sets value of bit at given index to 0
 * @n: first interger
 * @m: interger to be flipped
 *
 * Return: number of bits to flip from n to m
 */
 unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}

