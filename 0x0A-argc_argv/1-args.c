#include <stdio.h>
/**
 * main - prints the number of args pass into it
 * @argc: number of arg
 * @argv: points to array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
