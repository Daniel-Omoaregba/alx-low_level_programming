#include <stdio.h>
#include "main.h"
/**
 * times_table - print 9 times table
 */
void times_table(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (y == 0)
				printf("%d", x);
			else 
				printf("%2d", x * y);
			if (y < 9)
			{
				printf(", ");
			}
		}
		putchar('\n');
	}
}
