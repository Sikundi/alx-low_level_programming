/**
 * _memcpy - copies n bytes of memory
 * @dest: pointer to dest string
 * @src: source to be copied from
 * @n: number of bytes to ccopy from source
 *
 * Return: pointer to start of memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *start = dest;

	while (i < n)
	{
		*dest++ = *src++;
		i++;
	}
	return (start);
}
