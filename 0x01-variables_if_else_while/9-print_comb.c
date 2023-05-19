#include <stdio.h>
/**
 * main - combination of single digit
 * @void: no arg
 *
 * Description: prints all possible combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int s_num;

	for (s_num = '0'; s_num <= '9'; s_num++)
	{
		putchar(s_num);
		if (s_num != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
