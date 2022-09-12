#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -  main function
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int last_name;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_name = n % 10;
	if (last_name > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_name);
	else if (last_name == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_name);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_name);
	return (0);
}
