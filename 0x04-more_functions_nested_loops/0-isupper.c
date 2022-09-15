#include "main.h"
/**
 * _isupper - check for upppercase character
 * @c: the parameter
 * Return: 0 and 1
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		_putchar(c);
		return (1);
	}
	else
	{
		_putchar(c);
		return (0);
	}
	_putchar('\n');
}
