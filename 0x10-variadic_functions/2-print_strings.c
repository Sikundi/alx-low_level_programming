#include "variadic_functions.h"

/**
 * print_strings - prints string followed by new line
 * @separator: string that separates two strings
 * @n: number of parameters to be passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list strings;

	va_start(strings, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
