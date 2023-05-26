/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: substring to find
 *
 * Return: pointer to start of needle
 *         in haystack
 */
char *_strstr(char *haystack, char *needle)
{
	char *occurance, *tempNeedle;

	if (!*needle)
		return (haystack);
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			occurance = haystack;
			tempNeedle = needle;
			while (*tempNeedle)
			{
				if (*haystack++ != *tempNeedle++)
				{ /* not a match, reset pointer to first occurance */
					haystack = occurance;
					break;
				}
			}
			if (occurance != haystack) /* didn't reset, found match */
				return (occurance);
		}
		haystack++;
	}
	return (0); /* didn't get match */
}
