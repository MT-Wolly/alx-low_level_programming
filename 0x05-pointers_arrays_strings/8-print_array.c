#include <stdio.h>
#include "main.h"

/**
* print_array - prints elements of an array integer.
* @a: input array
* @n: number of integers
* Return: no return
*/
void print_array(int *a, int n)
{
	int i;

	for (; i <= n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
