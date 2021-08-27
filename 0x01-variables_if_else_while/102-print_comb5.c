#include <stdio.h>

/**
 * main - Prints number pair  between 00 to 99 with no repition.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k, l, digit_1, digit_2;

i = j = k = l = 48;
while (l < 58)
{
	k = 48;
	while (k < 58)
	{
		j = 48;
		while (j < 58)
		{
			i = 48;
			while (i < 58)
			{
				digit_1 = (l * 10) + k;
				digit_2 = (j * 10) + i;
				if (digit_1 < digit_2)
				{
					putchar(l);
					putchar(k);
					putchar(' ');
					putchar(j);
					putchar(i);
					if (l == 57 && k == 56 && j == 57 && i == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				i++;
			}
			j++;
		}
		k++;
	}
	l++;
}
putchar('\n');
return (0);
}
