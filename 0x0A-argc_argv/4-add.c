#include <stdlib.h>
#include <stdio.h>
/**
 * main - add positive numbers
 * @argc: arg count
 * @argv: array of arg
 *
 * Return: 0 or 1
 */
int main(int argc, char* argv[])
{
	int i, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (atoi(arg[i]) > 0)
		{
			sum += atoi(arg[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
