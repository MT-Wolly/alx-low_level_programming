#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints sum of two diagonals of square matrix.
* @a: input pointer.
* @size: size of the matrix.
* Return: None.
*/
void print_diagsums(int *a, int size)
{
	int i, sum_A = 0, sum_B = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			sum_A += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			sum_B += *(a + i);
	}
	printf("%d, %d\n", sum_A, sum_B);
}
