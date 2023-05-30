#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: first pointer to int a
 * @b: second pointer to int b
 */
void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
