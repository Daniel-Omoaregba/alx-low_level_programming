#include <stdio.h>
/**
 * main - main function
 * @void: no arg
 *
 * Description: prints all possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int first_d, second_d;

	for (first_d = '0'; first_d <= '9'; first_d++)
	{
		for (second_d = '0'; second_d <= '9'; second_d++)
		{
			if (first_d < second_d)
			{
				putchar(first_d);
				putchar(second_d);
				if (first_d == '8' && second_d == '9')
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
