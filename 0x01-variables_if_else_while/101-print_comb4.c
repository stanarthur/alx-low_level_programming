#include <stdio.h>

/**
 * main - prints all possible difrnt comb. of three digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, f, g;

i = 48;
f = 48;
g = 48;

while (f < 58)
{
i = 48;
while (i < 58)
{
g = 48;
while (g < 58)
{
if (f != i && f != g && i != g && f < i && i < g)
{
putchar(f);
putchar(i);
putchar(g);
if (i == 56 && f == 55 && g == 57)
{
break;
}
putchar(',');
putchar(' ');
}
g++;
}
i++;
}
f++;
}
putchar('\n');
return (0);
}
