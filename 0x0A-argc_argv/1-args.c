#include <stdio.h>

/**
* main - prints number of arguments passed into it
* @argc: number of comand line argument
* @argv: array containing command line args
* Return: Always 0
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
