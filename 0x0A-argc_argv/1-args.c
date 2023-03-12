#include <stdio.h>

/**
 * main - prints number of arguments passed
 * @argc: argument count
 * @argv: array of pointers to the argument
 *
 * Return: Always 0 (success)
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
