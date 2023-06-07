#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: arg for the parameter of the string
 */
void puts_half(char *str)
{
	int i, length_of_the_string, n;

	length_of_the_string = 0;

	for (i = 0; i >= 0; i++)
	{
		if (str[i] != '\0')
		{
			length_of_the_string = length_of_the_string + 1;
		}
		else
		{
			break;
		}
	}
	if (length_of_the_string % 2 == 0)
	{
		n = length_of_the_string / 2;
		for (i = n; i <= length_of_the_string; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		n = (length_of_the_string - 1) / 2;
		for (i = n; i <= length_of_the_string; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
