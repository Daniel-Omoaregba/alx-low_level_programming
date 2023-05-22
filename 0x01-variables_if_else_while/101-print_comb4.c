#include <stdio.h>
/**
 * main - combinations of three digits
 * @void: no arg
 *
 * Description: prints all possible different combinations of three digits
 * Return: 0
 */
int main(void)
{
	int first_num, second_num, third_num;

	for (first_num = '0'; first_num <= '9'; first_num++)
	{
		for (second_num = '0'; second_num <= '9'; second_num++)
		{
			for (third_num = '0'; third_num <= '9'; third_num++)
			{
				if (first_num < second_num && second_num < third_num)
				{
					putchar(first_num);
					putchar(second_num);
					putchar(third_num);
					if (first_num == '7' && second_num == '8' && third_num == '9')
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
