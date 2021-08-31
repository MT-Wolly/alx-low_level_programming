#include <stdio.h>

/**
 * main - Prints the addtion of the even
 * fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int num1, num2, fn, add_fn;

	num1 = 1;
	num2 = 2;
	fn = afn = 0;
	while (fn <= 4000000)
	{
		fn = num1 + num2;
		num1 = num2;
		num2 = fn;
		if ((num1 % 2) == 0)
		{
			add_fn += num1;
		}
	}
	printf("%ld\n", add_fn);
	return (0);
}
