#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: arg that holds the parameter s
 */
void rev_string(char *s)
{
	int i, n;

	n = 0;
	for (i = 0; i >= 0; i++)
	{
		if (s[i] != '\0')
		{
			n = n + 1;
		}
		else
		{
			break;
		}
	}
	for (i = n; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	putchar('\n');
}
