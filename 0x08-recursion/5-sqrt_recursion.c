#include "main.h"

/**
* power - returns natural sqaure root of a number
* @n: input integer
* @p: squareroot operator
* Return: squareroot of a number
*/
int power(int n, int p)
{
	if (p % (n / p) == 0)
	{
		if (p * (p / n) == n)
			return (p);
		else
			return (-1);
	}
	return (0 + power(n, p + 1));
}
/**
* _sqrt_recursion - returns natural sqaure root of a number
* @n: input integer
* Return: squareroot of a number
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power(n, 2));
}
