#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @x: holds the value
 *
 * Return: value of last digit
 */
int print_last_digit(int x)
{
	int last_digit;

	if (x >= 0)
	{
		last_digit = x % 10;
		_putchar(last_digit + '0');
		return (last_digit);
	}
	else
	{
		last_digit = (x % 10) * -1;
		_putchar(last_digit + '0');
		return (last_digit);
	}
}
