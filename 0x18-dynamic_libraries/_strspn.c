/**
 * _strspn - finds length of prefix substring
 *
 * @s: string to check
 * @accept: substring of chars
 *
 * Return: n bytes in intial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int consit = 0;
	int prev;

	while (*s)
	{
		i = 0;
		prev = consit;
		while (*(accept + i) != '\0')
		{
			if (*(accept + i) == *s)
				consit++;
			i++;
		}
		if (prev == consit)
			break;
		s++;
	}
	return (consit);
}
