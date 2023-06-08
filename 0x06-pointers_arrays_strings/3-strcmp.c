#include <stdio.h>
/**
 * _strcmp - compares two strings
 * @s1: points to s1
 * @s2: points to s2
 *
 * Return: int a
 */
int _strcmp(char *s1, char *s2)
{
	int cmp;

	if (*s1 < *s2)
	{
		cmp = (int) *s1 - (int) *s2;
	}
	else if (*s1 > *s2)
	{
		cmp = (int) *s1 - (int) *s2;
	}
	else
	{
		cmp = 0;
	}
	return cmp;
}
