#include <stdio.h>

/**
 * cmain - it prints a string before function 
 * executed before main
 * Return: it has no return.
 */

void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
