#include <stdio.h>
#include <time.h>
/**
 * main - the main function
 * Description: this is t check if the number is a postive, negative or zero
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		print("%d is positive", n);
	else if (n == 0)
		print("%d is zero", n);
	else
		print("%d is negative\n", n);
	return (0);
}
