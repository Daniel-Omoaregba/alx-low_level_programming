#include <stdio.h>
/**
 * main - largest prime factor
 *
 * Return: Always 0.
 */
int main(void)
{
	long int i, n;

	i = 2;
	n = 612852475143;
	while (i <= n)
	{
		if (n % i == 0)
		{
			if (i == n)
				printf("%ld\n", i);
			n = n / i;
		}
		else
			i++;
	}
	return (0);
}













