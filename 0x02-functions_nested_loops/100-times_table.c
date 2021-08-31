#include "main.h"

/**
 * print_times_table - Prints n times table
 *
 * @n: number times table from 0 up to 15
 *
 * Return: no return
 */
void print_times_table(int n)
{
	int a, b, operation;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
				operation = a * b;
				_putchar(44);
				_putchar(32);
				if (operation <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(operation + 48);
				}
				else if (operation <= 99)
				{
					_putchar(32);
					_putchar((operation / 10) + 48);
					_putchar((operation % 10) + 48);
				}
				else
				{
					_putchar(((operation / 100) % 10) + 48);
					_putchar(((operation / 10) % 10) + 48);
					_putchar((operation % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
