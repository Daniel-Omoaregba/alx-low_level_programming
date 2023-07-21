#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 *
 * Return: Null or returns a pointer to a new string
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *spr;
	int len;

	len = strlen(str);
	spr = malloc(sizeof(char) * len);
	if (str == NULL || spr == NULL)
		return (NULL);
	for (i = 0; i < strlen(str); i++)
	{
		spr[i] = str[i];
	}
	return (spr);
}
