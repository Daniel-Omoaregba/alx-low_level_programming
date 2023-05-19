#include <stdio.h>
/**
 * main - print base 10 numbers
 * @void: no arg
 *
 * Description: prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	char b_ten;

	for (b_ten = '0'; b_ten <= '9'; b_ten++)
		putchar(b_ten);
	putchar('\n');
	return (0);
}
