/**
 * _isupper - checks for capital letters
 * @c: character to be checked
 *
 * Return: Is 1 if c is uppercase otherwise is 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
