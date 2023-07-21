#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an array of chars and initialize it
 * @size: the size of the memory
 * @c: the specific char use to initialize
 *
 * Return: NULL or pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *buf;
	unsigned int i;

	buf = malloc(sizeof(*buf) * size);
	if (size == 0 || buf == NULL)
		return (NULL);
	for (i = 1; i <= size; i++)
	{
		buf[i] = c;
	}
	return (buf);
}
