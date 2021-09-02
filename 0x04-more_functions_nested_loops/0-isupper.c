#include "holberton.h"

/**
 * _isupper - checks if a character is an uppercase character.
 * @c: input character.
 * Return: 1 if it is an uppercase character, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
