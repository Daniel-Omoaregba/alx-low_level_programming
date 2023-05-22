#include <stdio.h>
/**
 * main - two two-digit numbers
 * @void: no arg
 *
 * Description: all possible combinations of two two-digit numbers
 * Return: 0
 */
int main(void)
{
	int first_nums, second_nums;

	for (first_nums = 0; first_nums <= 99; first_nums++)
	{
		for (second_nums = 0; second_nums <= 99; second_nums++)
		{
			if (first_nums < second_nums)
			{
			putchar(first_nums / 10 + '0');
			putchar(first_nums % 10 + '0');
			putchar(' ');
			putchar(second_nums / 10 + '0');
			putchar(second_nums % 10 + '0');
				if (first_nums == 98 && second_nums == 99)
				{
					break;
				}
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
