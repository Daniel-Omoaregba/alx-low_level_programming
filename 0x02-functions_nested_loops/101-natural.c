#include <stdio.h>
/**
 * main - the sum of multiple of a number
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d", sum);
	putchar('\n');
	return (0);
}
