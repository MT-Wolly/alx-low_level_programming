#include "main.h"

/**
* _strstr - function that locates a substring
* @haystack: string to be searched
* @needle: substring to be searched for
* Return: pointer to beginning of located substring,
* or null ifn substring not present.
*/
char *_strstr(char *haystack, char *needle)
{
	char *str1;
	char *substr;

	while (*haystack != '\0')
	{
		str1 = haystack;
		substr = needle;

		while (*haystack != '\0' && *substr != '\0' && *haystack == *substr)
		{
			haystack++;
			substr++;
		}
		if (!*substr)
			return (str1);
		haystack = str1 + 1;
	}
	return (0);
}
