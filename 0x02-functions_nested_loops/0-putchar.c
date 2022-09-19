#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * _putchar - writes the character c to stdout
 * @ch: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{
	char ch[8] = "_putchar";
	int i = 0;

	while (i <= 8)
	{
		_putchar(ch[i]);
		i++;
	}
	return (0);
}
