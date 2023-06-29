#include <stdio.h>
/**
 * _strcpy - copies the string from src to dest
 * @dest: points to the string s1
 * @src: points to the string
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (1)
	{
		if (*(src + i) != '\0')
		{
			*(dest + i) = *(src + i);
			i++;
		}
		else
		{
			*(dest + i) = '\0';
			break;
		}
	}
	return (dest);
}
