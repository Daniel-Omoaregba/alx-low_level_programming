#include <stdio.h>
#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: first string s1
 * @src: second string s2
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, n, j;

	i = 0;
	n = 0;
	while (*(dest + i) != '\0')
	{
		n++;
		i++;
	}
	j = 0;
	while (1)
	{
		if (*(src + j) != '\0')
		{
			*(dest + (n + j)) = *(src + j);
			j++;
		}
		else
		{
			*(dest + (n + j)) = '\0';
			break;
		}
	}
	return (dest);
}
