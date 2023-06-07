#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: arg that holds the parameter s
 */
void rev_string(char *s)
{
	int i, j, n, m;

	n = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		printf("%d  %c\n", i, *(s + i));
		n++;
	}
	printf("%d\n", n);

	for (j = 0, m = n - ; j <= n; j++)
	{
		if (j < n)
		{
			*(s + j) = *(s + m);
			printf("%c\n", *(s + j));
			m--;
		}
		else
		{
			*(s + j) = '\0';
		}
	}
}
