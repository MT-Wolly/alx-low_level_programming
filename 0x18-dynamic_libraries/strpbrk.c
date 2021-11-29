#include "main.h"

/**
* _strpbrk - searches a string for any set of bytes
* @s: input string
* @accept: second string
* Return: pointer to byte in s that matches byte in accept,
* returns NULL if none is found
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
