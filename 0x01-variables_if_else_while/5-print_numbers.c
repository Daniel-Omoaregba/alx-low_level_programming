#include <stdio.h>
/**
 * main - print base 10
 * @void: no arg
 *
 * Desctiption: prints all single digit numbers of base 10 starting
 * Return: 0
 */
int main(void)
{
	int b_ten;

	for (b_ten = 0; b_ten <= 9; b_ten++)
		printf("%d", b_ten);
	putchar('\n');
	return (0);
}
