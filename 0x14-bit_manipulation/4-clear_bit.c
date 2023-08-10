#include <stdio.h>
#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @index: index
 * @n: pointer to number
 *
 * Return: 1 0r -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num_bits, mask;

	num_bits = sizeof(unsigned long int) * 8;
	if (index >= num_bits)
		return (-1);
	mask = 1 << index;
	mask = ~mask;
	*n &= mask;

	return (1);
}
