#include "main.h"
/**
 * print_binary - pritns bin representation of num
 * @n: number
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int b_flag;

	b_flag = 0;
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (mask)
	{
		if (n & mask)
		{
			_putchar('1');
			b_flag = 1;
		}
		else if (b_flag)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}
