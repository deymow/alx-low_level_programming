#include <unistd.h>
#include "main.h"

/**
 * Print_alphabets - a function that prints alphabet
 * follow by a new line
 *
 * Return:void
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
