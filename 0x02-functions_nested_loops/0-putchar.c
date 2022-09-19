#include <stdio.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{
	/**
	 * Prints out _putchar using while loop
	 */
	char ch[8] = "_putchar";
	int i = 0;

	while (i <= 8)
	{
		char c = ch[i];
		_putchar(c);
		i++;
	}
	return (0);
}
