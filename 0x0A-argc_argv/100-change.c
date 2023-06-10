#include <stdlib.h>
#include <stdio.h>
/**
 * main - minimum number of coins to make change for an amount of money
 * @argc: arg count
 * @argv: array of arg cents
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num_coin, n;

	num_coin = 0;
	n = atoi(argv[1]);
	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else if (n < 0)
	{
		printf("0\n");
	}
	else
	{
	while (1)
	{
		if (n >= 25)
		{
			if (n % 25 == 0)
			{

				num_coin += n / 25;
				printf("%d\n", num_coin);
				break;
			}
			else
			{
				num_coin += n / 25;
				n = n % 25;
			}
		}
		else if (n >= 10 && n < 25)
		{
			if (n % 10 == 0)
			{
				num_coin += n / 10;
				printf("%d\n", num_coin);
				break;
			}
			else
			{
				num_coin += n / 10;
				n = n % 10;
			}
		}
		else if (n >= 5 && n < 10)
		{
			if (n % 5 == 0)
			{
				num_coin += n / 5;
				printf("%d\n", num_coin);
				break;
			}
			else
			{
				num_coin += n / 5;
				n = n % 5;
			}
		}
		else if (n >= 2 && n < 5)
		{
			if (n % 2 == 0)
			{
				num_coin += n / 5;
				printf("%d\n", num_coin);
				break;
			}
			else
			{
				num_coin += n / 2;
				n = n % 5;
			}
		}
		else
		{
			num_coin += n;
			printf("%d\n", num_coin);
			break;
		}
	}
	}
	return (0);
}	
			
