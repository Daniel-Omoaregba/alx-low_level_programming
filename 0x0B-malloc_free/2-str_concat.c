#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: strings
 * @s2: the strings
 *
 * Return: NULL or returned pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *ss1;
	int len_s1, len_s2, total_len, i, j;

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	if (len_s1 == 0 && len_s2 == 0)
		return ("");
	total_len = len_s1 + len_s2;

	ss1 = malloc(sizeof(char) * total_len);
	if (ss1 == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len_s1)
	{
		ss1[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len_s2)
	{
		ss1[i + j] = s2[j];
		j++;
	}
	ss1[i + j] = '\0';
	return (ss1);
}
