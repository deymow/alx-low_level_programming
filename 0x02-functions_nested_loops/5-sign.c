/**
 * File: 5-sign.c
 * Auth: Ademola E. Adeyemi
 */

#include "main.h"

/**
 * print_sign(int n) - Check description
 * Description: print_sign function prints the sign of a number
 * @n: The number of which the sign will be printed.
 * Return: 1 if number is positive,
 *	0 if number is 0, or
 *	-1 if number is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
