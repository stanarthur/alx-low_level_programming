#include <stdio.h>

/**
 * main - Prints numbers between 00 to 99.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, e, g, h, op1, op2;

i = a = b = c = 48;
while (h < 58)
{
c = 48;
while (g < 58)
{
a = 48;
while (a < 58)
{
i = 48;
while (i < 58)
{
op1 = (b * 10) + c;
op2 = (a * 10) + i;
if (op1 < op2)
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
