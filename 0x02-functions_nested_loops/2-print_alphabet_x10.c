#include "main.h"

/**
 * prints 10 times the alphabet,lowercase, a new line.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
	_puatchr('\n');
	}
}
