#include <stdio.h>

/**
 * main - prints the largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int prime, i;

	prime = 612852475143;
	for (i = 2; i <= prime; i++)
	{
		if (prime % i == 0)
		{
			prime /= i;
			i--;
		}
	}
	printf("%ld\n", i);
	return (0);
}
