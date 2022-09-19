#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * print_alphabet - prints alphabet from a to z in lowercase
 * Return: always 0
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
