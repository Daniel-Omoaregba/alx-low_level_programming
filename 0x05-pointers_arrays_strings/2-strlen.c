#include <stdio.h>
/**
 * _strlen - length of a string
 * @s: pointer to char str
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i, str_len;

	str_len = 0;
	for (i = 0; i >= 0; i++)
	{
		if (s[i] == '\0')
		{
			break;
		}
		else
		{
			str_len = str_len + 1;
		}
	}
	return (str_len);
}
