#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by new line
 * @separator: string that separates two numbers
 * @n: number of parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
