#include <stdio.h>
/**
 * main - first 50 Fibonacci number
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long int x, y, sum;

	x = 0;
	y = 1;
	sum = 0;
	for (i = 0; i < 50; i++)
	{
		sum = x + y;
		printf("%ld", sum);
		x = y;
		y = sum;
		if (i < 49)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
