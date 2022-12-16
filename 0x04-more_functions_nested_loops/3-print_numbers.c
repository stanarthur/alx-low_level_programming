#include "main.h"

/**
 * print_numbers - prints numbers between 0 to 9.
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int ch;

	for (ch = 0; ch < 10; ch++)
	{
		_putchar(ch + '0');
	}
	_putchar('\n');
}