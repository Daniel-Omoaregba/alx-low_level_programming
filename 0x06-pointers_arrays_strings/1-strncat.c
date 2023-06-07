#include <stdio.h>
/**
 * _strncat - a function that concatenates two strings
 * @dest: points to string s1
 * @src: points to string s2
 * @n: bytes from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, len;

	len = 0;
	for (i = 0; *(dest + i) != '\0'; i++)
	{
		len++;
	}
	for (j = 0; j < n; j++)
	{
		*(dest + (len + j)) = *(src + j);
	}
	return (dest);
}
