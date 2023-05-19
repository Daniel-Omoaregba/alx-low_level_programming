#include <stdio.h>
/**
 * main - print uppercase alphabet
 * @void: no arg
 *
 * Description: print uppercase and lowercase alphabet
 * Return: 0
 */
int main(void)
{
	char l_alpha, u_alpha;

	for (l_alpha = 'a'; l_alpha <= 'z'; l_alpha++)
		putchar(l_alpha);
	for (u_alpha = 'A'; u_alpha <= 'Z'; u_alpha++)
		putchar(u_alpha);
	putchar('\n');
	return (0);
}
