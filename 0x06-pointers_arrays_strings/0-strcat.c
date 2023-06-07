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
		n += 1;
		i++;
	}
	for (j = 0; j >= 0; j++)
	{
		if (*(src + j) != '\0')
		{
			*(dest + n + i) = *(src + i);
		}
		else
		{
			*(dest + n + i) = '\0';
			break;
		}
	}
	printf("this %s", dest);
	return dest;
}
