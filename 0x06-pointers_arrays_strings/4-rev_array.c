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
	int i, j, tmp;

	i = n - 1;
	j = 0;
	for (i = 0, j = (n - 1); i < n / 2; i++, j--)
	{
		tmp = *(a + i);
	  	*(a + i) = * (a + j);
		*(a + j) = tmp;
	}	       
}
