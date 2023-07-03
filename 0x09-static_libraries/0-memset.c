#include <stdio.h>
#include "main.h"
/**
 * _memset - fill memory with a constant byte
 * @s: points to string
 * @b: char
 * @n: unsigned int
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	printf("\n");
	return (s);
}