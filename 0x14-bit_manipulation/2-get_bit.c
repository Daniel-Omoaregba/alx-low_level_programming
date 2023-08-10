#include "main.h"
/**
 * get_bit - functions that returns the value of a bit
 * @n: number
 * @index: the index
 *
 * Return: int 0r -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num_bits, mask, bit;

	num_bits =  sizeof(unsigned long int) * 8;
	if (index >= num_bits)
		return (-1);

	mask = 1 << index;
	bit = n & mask;

	if (bit)
		return (1);
	else
		return (0);
}
