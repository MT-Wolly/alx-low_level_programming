#include "main.h"

/**
* set_string - sets value of a pointer to a char
* @s: source path
* @to: destination address
* Return: None.
*/
void set_string(char **s, char *to)
{
	*s = to;
}
