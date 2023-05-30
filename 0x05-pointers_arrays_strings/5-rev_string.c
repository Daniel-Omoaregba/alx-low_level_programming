#include "main.h"
/**
 * rev_string - reverses a string
 * @s: arg that holds the parameter s
 */
void rev_string(char *s)
{
	int i;

	for (i = 8; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
