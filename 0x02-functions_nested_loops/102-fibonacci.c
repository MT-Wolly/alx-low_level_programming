#include <stdio.h>

/**
 * main - Prints the first 50 fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long int num1, num2, fn;

	num1 = 1;
	num2 = 2;
	printf("%ld, %ld", num1, num2);
	for (i = 0; i < 48; i++)
	{
		fn = num1 + num2;
		printf(", %ld", fn);
		num1 = num2;
		num2 = fn;
	}
	printf("\n");
	return (0);
}
