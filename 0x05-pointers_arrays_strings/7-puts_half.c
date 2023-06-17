#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of a string
 * @str: points to the string str
 */
void puts_half(char *str)
{
	int i, length_of_the_string, n;

	length_of_the_string = 0;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		length_of_the_string += 1;
	}
	n = length_of_the_string / 2;
	for (i = n; i <= length_of_the_string ; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
