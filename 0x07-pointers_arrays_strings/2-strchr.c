#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strchr - function that locates a character in a string
 * @s: the string
 * @c: the character
 *
 * Return: s or NULL
 */
char *_strchr(char *s, char c)
{
	int i;
	char *f;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			f = s + i;
			return (f);
		}
	}
	return (NULL);
}
