#include <stdio.h>
#include "main.h"
/**
 * set_bit - that sets the value of a bit to 1
 * @n: pointer to number
 * @index: index
 *
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num_bits, mask;

	num_bits = sizeof(unsigned long int) * 8;
	if (index >= num_bits)
		return (-1);
	mask = 1 << index;
	*n = *n | mask;

	return (1);
}
