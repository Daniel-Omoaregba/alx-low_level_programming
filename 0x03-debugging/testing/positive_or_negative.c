#include <stdlib.h>
#include <stdio.h>
/**
 * positive_or_negative - positive or negative number
 * @i: accepts value
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive", i);
	else if (i == 0)
		printf("%d is zero", i);
	else
		printf("%d is negative", i);
	printf("\n");
}
