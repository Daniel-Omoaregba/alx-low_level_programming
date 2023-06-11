#include <stdio.h>
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @n: points to str
 *
 * Return: ;
 */
char *string_toupper(char *n)
{
	int i;

	for (i = 0; *(n + i) != '\0'; i++)
	{
		if (*(n + i) > 'a' && *(n + i) < 'z')
		{
			*(n + i) = *(n + i) - 32;
		}
		else
		{
			*(n + i) = *(n + i);
		}
	}
	return (n);
}
