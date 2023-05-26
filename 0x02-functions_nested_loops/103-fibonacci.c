#include <stdio.h>
/**
 * main - sum of the even-value terms of the fibonacci sequence
 *
 * Return: Always 0.
 */
int main(void)
{
	long int x, y, z, sum;

	x = 0;
	y = 1;
	z = 0;
	sum = 0;
	while (1)
	{
		z = x + y;
		x = y;
		y = z;
		if (z % 2 == 0)
		{
			sum = sum + z;
			if (sum > 4000000)
				break;
		}
	}
	printf("%ld", sum);
	putchar('\n');
	return (0);
}
