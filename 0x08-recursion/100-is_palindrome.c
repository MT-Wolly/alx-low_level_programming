#include "main.h"

/**
* _strlen_recurse - length of the string
* @s: input string
* Return: the length of the string
*/
int _strlen_recurse(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recurse(s + 1));
}
/**
* compare - compares each character of the string
* @s: input string
* @n1: small iterator
* @n2: big iterator
* Return: just comparison
*/
int compare(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + compare(s, n1 + 1, n2 - 1));
	}
	return (0);
}
/**
* is_palindrome - checks if a string is palindrome
* @s: input string
* Return: returns 1 if yes and 0 if otherwise
*/
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1)
	return (compare(s, 0, _strlen_recurse(s) - 1));
}
