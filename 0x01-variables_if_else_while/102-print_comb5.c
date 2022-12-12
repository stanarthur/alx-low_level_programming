#include <stdio.h>

/**
 * main - Prints numbers between 00 to 99.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, a, b, c, ex1, ex2;

i = a = b = c = 48;
while (h < 58)
{
c = 48;
while (c < 58)
{
a = 48;
while (a < 58)
{
i = 48;
while (i < 58)
{
ex1 = (b * 10) + c;
ex2 = (a * 10) + i;
if (ex1 < ex2)
{
putchar(b);
putchar(c);
putchar(' ');
putchar(a);
putchar(i);
if (b == 57 && c == 56 && a == 57 && i == 57)
break;
putchar(',');
putchar(' ');
}
i++;
}
a++;
}
c++;
}
b++;
}
putchar('\n');
return (0);
}
