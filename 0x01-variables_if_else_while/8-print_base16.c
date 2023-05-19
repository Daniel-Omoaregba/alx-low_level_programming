#include <stdio.h>
/**
 * main - base 10
 * @void: no arg
 *
 * Description: prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	char hex_alpha, hex_num;

	for (hex_num = '0'; hex_num <= '9'; hex_num++)
		putchar(hex_num);
	for (hex_alpha = 'a'; hex_alpha <= 'f'; hex_alpha++)
		putchar(hex_alpha);
	putchar('\n');
	return (0);
}
