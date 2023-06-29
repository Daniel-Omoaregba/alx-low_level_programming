#include "main.h"
/**
 * _puts - prints a string
 * @str: holds the strings parameters
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			break;
		}
		else
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
