#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: holds the value
 *
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
