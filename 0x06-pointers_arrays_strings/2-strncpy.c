#include <stdio.h>
/**
 * _strncpy - function that copies a string
 * @dest: points to s1
 * @src: points to string
 * @n: bytes from src
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
