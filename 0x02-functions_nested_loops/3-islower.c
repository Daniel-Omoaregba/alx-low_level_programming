#include "main.h"
/**
 * _islower - checks the lower case letter
 * @c: first parameter returns 1
 * Return: 0 0r 1
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
