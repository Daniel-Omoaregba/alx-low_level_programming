#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - prints a string in reverse
 * @s: points to the string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
