#include <stdio.h>
/**
 * newwork - function that prints string before main function is executed
 */
void newwork (void) __attribute__((constructor));
void newwork (void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
