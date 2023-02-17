#include <stdio.h>

/**
 * main - print all single digits and follow with new line
 *
 * Return: Always 0 (succcess)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(num);

	putchar('\n');

	return (0);
}
