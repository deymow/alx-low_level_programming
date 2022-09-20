#include "main.h"

/**
 * print_alphabets - this program prints english alphabet from a-z.
 *
 * Return: void
 *
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

}
