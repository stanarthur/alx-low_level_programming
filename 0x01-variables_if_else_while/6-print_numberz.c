#include <stdio.h>

/**
 * main - Print single digits starting from 0
 *
 * Result: Always 0 (Success)
 */
int main(void)
{
    int i = 0;
    for (i = 0; i < 20; i++)
    {
        putchar(i);
    }
    putchar('\n');
    return (0);
}