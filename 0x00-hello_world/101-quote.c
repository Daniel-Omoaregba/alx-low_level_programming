/**
 * main - standard error
 * @void: no arg
 *
 * Description:print to standard error
 * Return: 1
 */
#include <stdio.h>
int main(void)
{
	fwrite("and that piece of art is useful\" - ", 35, 1, stderr);
	fwrite("Dora Korpar, 2015-10-19\n", 24, 1, stderr);
	return (1);
}
