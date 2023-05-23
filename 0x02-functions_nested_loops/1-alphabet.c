#include "_putchar"
/**
 * print_alphabet - print lowercase alphabet
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char l_alpha;

	for (l_alpha = 'a'; l_alpha <= 'z', l_alpha++)
	{
		_putchar(l_alpha);
	}
	_putchar('\n');
	return (0);
}
