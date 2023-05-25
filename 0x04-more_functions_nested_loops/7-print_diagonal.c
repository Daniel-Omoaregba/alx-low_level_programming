#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: the number of times the \ should be printed
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (i > j)
				{
					_putchar(' ');
				}
				if (i == j)
				{
					_putchar('\\');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
