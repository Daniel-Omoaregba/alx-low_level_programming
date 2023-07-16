#include <stdio.h>
#include "main.h"
/**
 * rev_string - reverses a string
 * @s: points to the string s
 */
void rev_string(char *s)
{
	int num_string, i, j;
	char tmp;

	num_string = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		num_string++;
	}
	for (i = 0, j = num_string - 1; i < (num_string - 1) / 2; i++, j--)
	{
		tmp = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = tmp;
	}
}
