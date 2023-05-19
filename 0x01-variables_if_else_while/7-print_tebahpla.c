#include <stdio.h>
/**
 * main - lowercase alphabet in reverse
 * @void: no arg
 *
 * Description: prints the lowercase alphabet in reverse
 * Return: (0)
 */
int main(void)
{
	char l_alpha;

	for (l_alpha = 'z'; l_alpha >= 'a'; l_alpha--)
		putchar(l_alpha);
	putchar('\n');
	return (0);
}
