#include "main.h"

/**
* factorial - returns factorial of a given number
* @n: input number
* Return: factorial of number, and -1 if n < 0
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1)
	else
		return (n * factorial(n - 1));
}
