#include "main.h"

/**
* *_strcpy - copies tring pointed to by src to buffer
* pointed to by dest.
* @dest: destination pointer
* @src: soource pointer
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i >= 0)
	{
		*(dest + i) = *(src + i);
		if (*(src + i) == '\0')
			break;
		i++;
	}
	return (dest);
}
