#include <stdio.h>
/**
 * print_times_table - n times table starting from 0
 * @n: holds the values
 */
void print_times_table(int n)
{
	int i, j;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				printf("%3d", i * j);
				if (j < n)
					printf(", ");
			}
			putchar('\n');
		}
	}
}
