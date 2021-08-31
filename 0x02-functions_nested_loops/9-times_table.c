#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: no return value
 */
void times_table(void)
{
	int i, j, operation;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			operation = i * j;
			_putchar(44);
			_putchar(32);
			if (operation <= 9)
			{
				_putchar(32);
				_putchar(operation + 48);
			}
			else
			{
				_putchar((operation / 10) + 48);
				_putchar((operation % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
