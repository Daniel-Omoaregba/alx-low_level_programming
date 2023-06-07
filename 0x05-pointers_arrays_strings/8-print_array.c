#include <stdio.h>
/**
 * print_array - n elements of an array of integers
 * @a: takes array parameter
 * @n: second arg. takes the index of an array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
