#include <stdio.h>

/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if ((alpha[i] == 'e') || (alpha[i] == 'q'))
		{
			continue;
		}
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
