#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
*   sum_them_all - function that returns the sum of all its parameters
*   @n: const unsigned int
*
*   Return: sum of all its parameters
*/


int sum_them_all(const unsigned int n, ...)
{
    va_list nu;
    int sum, i;

va_start(nu, n);
if (n == 0)
return (0);

sum = 0;
for (i = 0; i < nu; i++)
    sum += va_arg(nu, int);

    va_end(nu);
    return sum;
}