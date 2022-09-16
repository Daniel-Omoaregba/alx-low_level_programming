#include "main.h"

/**
 * more_numbers - more numbers
 *
 * Description: prints 10 times the numbers, from 0 to 14
 * Return: Always (0)
 */

void more_numbers(void)
{
	int x, i;

	for (x = 0; x <= 10; x++)
	{
		i = 0;
		while (i <= 14)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
			else
			{
				_putchar(i % 10 + '0');
			}
			i++;
		}
	_putchar('\n');
	}
}
