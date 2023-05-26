#include <stdio.h>
/**
 * main - the first 98 Fibonacci starting from 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long int x, y, sum;

	x = 0;
	y = 1;
	sum = 0;
	for (i = 0; i < 98; i++)
	{
		sum = x + y;
		printf("%lu", sum);
		x = y;
		y = sum;
		if (i < 97)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

