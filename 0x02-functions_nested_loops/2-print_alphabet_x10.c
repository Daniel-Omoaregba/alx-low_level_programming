#include "main.h"
/**
 * print_alphabet_x10 - print 10x lowercase alphabet
 *
 * Return: 0.
 */
void print_alphabet_x10(void)
{
	char l_alpha;
	int x;

	for (x = 0; x <= 9; x++)
	{
		for (l_alpha = 'a'; l_alpha <= 'z'; l_alpha++)
		{
			_putchar(l_alpha);
		}
		_putchar('\n');
	}
}
