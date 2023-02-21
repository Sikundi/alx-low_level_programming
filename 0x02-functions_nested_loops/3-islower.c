#include "main.h"

/**
 * _islower - checks for lowercase.
 * @c: The charcater to be checked.
 *
 * Return: 1 if c is lowercase, else return 0.
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);

	else

		return (0);
}
