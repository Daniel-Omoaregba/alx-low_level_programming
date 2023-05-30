#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: arg that takes the parameter of the string
 */
void print_rev(char *s)
{
	int i, num_of_string;

	i = 0;
	num_of_string = 1;
	while (i >= 0)
	{
		if (s[i] != '\0')
		{
			num_of_string = num_of_string + 1;
		}
		else
		{
			break;
		}
		i++;
	}
	for (i = num_of_string - 2; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
