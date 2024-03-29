#include <stdio.h>
#include "main.h"
/**
 * flip_bits - returns the number of bits you need to flip
 * @n: first number
 * @m: second number
 *
 * Return: num of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res = n ^ m;
	unsigned int count = 0;

	while (res != 0)
	{
		count += res & 1;
		res >>= 1;
	}
	return (count);
}
