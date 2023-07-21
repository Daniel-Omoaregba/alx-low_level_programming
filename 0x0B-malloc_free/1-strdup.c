#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * strdup - returns a pointer to a newly allocated space in memory
 * @str: 
 *
 * Return: Null or returns a pointer to a new string
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *spr;

	if (str == NULL)
	{
		return (NULL);
	}
	spr = malloc(sizeof(*spr) * strlen(str));
	for (i = 0; i < strlen(str); i++)
	{
		spr[i] = str[i];
	}
	free(spr);
	return (spr);
}
