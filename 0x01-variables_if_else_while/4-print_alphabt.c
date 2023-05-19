#include <stdio.h>
/**
 * main - print lowercase alphabet
 * @void: no arg
 *
 * Description: print alphabet in lowercase except q and e
 * Return: 0
 */
int main(void)
{
	char l_alpha;

	for (l_alpha = 'a'; l_alpha <= 'z'; l_alpha++)
		if (l_alpha != 'e' && l_alpha != 'q')
			putchar(l_alpha);
	putchar('\n');
	return (0);
}

