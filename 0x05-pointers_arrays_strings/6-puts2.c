#include "main.h"
/**
 * puts2 - every other character of a string
 * @str: the arg for the parameter str
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i >= 0; i++)
	{
		if (str[i] != '\0')
		{
			if (i % 2 == 0)
			{
				_putchar(str[i]);
			}
		}
		else
		{
			break;
		}
	}
	_putchar('\n');
}
