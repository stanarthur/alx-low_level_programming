#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Print all the letters except q and e.
 *
 *Return: Always 0 (Success)
 */
 int main(void)
 {
    char alp[26] = "abcdefghijklmnopqrstuvwxyz";
    int i;

    for (i = 0; i < 26; i++)
    {
        if (i != 'q' && i = 'e')
        {
            putchar(alp[i]);
        }
    }
    putchar('\n')
    return (0);
 }