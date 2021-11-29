#include "main.h"

/**
* _isalpha - returns 1 if character is a letter,
*either upper or lowercase and 0 if character is not a letter.
*
* @c: the character is ASCII code
*
* Return: 1 for letters, o for otherwise.
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
