#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - the natural square root of a number
 * @n: int
 * @bn: base number
 * Return: the natural square root of a number
 */
int calculator(int n, int bn);
int _sqrt_recursion(int n)
{
	return (calculator(n, 1));
}
/**
 * calculator - calculates for the number
 * @n: number whose sqrt is to be calculated
 * @bn: base number
 *
 * Return: 0
 */
int calculator(int n, int bn)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else if (bn * bn == n)
		return (bn);
	else if (bn * bn > n)
		return (-1);
	return (calculator(n, bn + 1));
}
