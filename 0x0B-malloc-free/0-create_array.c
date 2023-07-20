#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
    char *buf;
    unsigned int i;

    buf = malloc(sizeof(char) * size);
    if (size == 0)
    {
        NULL;
    }
    for (i = 1; i <= size; buf++)
    {
        buf[i] = c;
    }
    free(buf);
    return (buf);
}