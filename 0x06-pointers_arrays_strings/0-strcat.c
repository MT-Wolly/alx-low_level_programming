#include "main.h"
/**
 * *_strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int c1 = 0, c2 = 0;

	while (*(dest + c1) != '\0')
	{
		_putchar(c1);
	}

	for (; *(src + c2) != '\0'; ++c2; ++c1)
	{
		*(dest + c1) = *(src + c2);
	}
	*(dest + c1) = '\0';
	_putchar(dest);
	_putchar('\n');
}
