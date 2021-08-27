#include <stdio.h>

/**
 * main - Prints the alphabet in lower and upper case.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
