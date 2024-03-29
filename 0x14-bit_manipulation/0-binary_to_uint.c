#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to binary
 *
 * Return: %ud
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int deci = 0;
	
	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b !=  '0' && *b != '1')
			return (0);

		deci = (deci << 1) + (*b - '0');
		b++;
	}
	return (deci);
}
