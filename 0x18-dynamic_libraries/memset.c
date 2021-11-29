#include "main.h"

/**
* *_memset - fills up memory with a constant byte
*
* @s: destination where byte is stored
* @b: constant byte
* @n: number of bytes
* Return: returns s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
