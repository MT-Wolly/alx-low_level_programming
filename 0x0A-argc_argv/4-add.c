#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - adds two numbers
* @argc: number of command line arguments
* @argv: array containing command line arguments
* Return: 0 if Success
*/
int main(int argc, char *argv[])
{
	int i, j, addition = 0;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		addition += atoi()argv[i];
	}
	printf("%d\n", addition);
	return (0);
}
