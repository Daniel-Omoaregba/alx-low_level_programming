#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - positive or negative number
 * @void: no arg
 * Description: print whether the number stored in n is positive or negative
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10  > 5)
		printf("Last digit of %d is %d and is greater than 5", n, n % 10);
	else if (n % 10 == 0)
		printf("Last digit of %d is %d and is 0", n, n % 10);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0", n, n % 10);
	printf("\n");
	return (0);
}
