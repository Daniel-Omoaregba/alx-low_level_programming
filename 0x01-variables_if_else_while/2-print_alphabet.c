#include <stdio.h>
/**
 * main - print lowercase alphabet
 * @void: no arg
 *
 * Description: a program that prints lowercase alphabets
 * Return: 0
 */
int main(void)
{
	char l_alpha;

	for (l_alpha = 'a'; l_alpha <= 'z'; l_alpha++)
		putchar(l_alpha);
	putchar('\n');
	return (0);
}
