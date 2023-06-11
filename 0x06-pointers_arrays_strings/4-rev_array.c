#include <stdio.h>
/**
 * reverse_array - reverses the content of an array of integers
 * @a: points to the array a
 * @n: number of elements in array
 *
 * Return: 0;
 */
void reverse_array(int *a, int n)
{
	int i;

	i = n - 1;
	while (i >= 0)
	{
		if (i != n - 1)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i--;
	}
	printf("\n");
}
