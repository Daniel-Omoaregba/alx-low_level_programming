#include "main.h"
/**
 * print_triangle - print a triangle
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (i + j <= size)
				{
					_putchar(' ');
				}
				if (i + j > size)
				{
					_putchar('#');
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
