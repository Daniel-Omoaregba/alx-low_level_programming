#include <stdio.h>
/**
 * cap_string - capitalizes all words of a string
 * @s: points to the string str
 *
 * Return: char
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == ' ' || *(s + i) == '\n' || *(s + i) == '\t')
		{
			i++;
			if ( *(s + i) > 'a' && *(s + i) < 'z')
			{
				*(s + i) = *(s + i) - 32;
			}
		}
	}
	return (s);
}
