#include <stdlib.h>
#include <stdio.h>
/**
 * change - check if it is divisible by 25, 10, 5, 2, 1
 * @n: holds n
 *
 * Return: num_coin
 */
int change(int n);
int change (int n)
{
	int i, num_coin;
	int change[5] = {25, 10, 5, 2, 1};

	num_coin = 0;
	for (i = 0; i < 5; i++)
	{
		if (n >= change[i] && n > 1)
		{
			if (n % change[i] == 0)
			{
				num_coin += n / change[i];
				break;
			}
			else
			{
				num_coin += n / change[i];
				n = n % change[i];
			}
		}
		else
		{
			num_coin += n;
			break;
		}
	}
	return (num_coin);
}

/**
 * main - minimum number of coins to make change for an amount of money
 * @argc: arg count
 * @argv: array of arg cents
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n =  atoi(argv[1]);
		if (n > 0)
		{
			printf("%d\n", change(n));
		}
		else
		{
			printf("0\n");
		}
	}
	return (0);
}	
			
