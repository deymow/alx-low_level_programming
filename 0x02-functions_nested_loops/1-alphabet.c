#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * print_alphabet - writes alphabet from a to z in lowercase
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
