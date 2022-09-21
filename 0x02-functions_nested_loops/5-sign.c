/**
 * File: 5-sign.c
 * Auth: Ademola E. Adeyemi
 */

#include "main.h"

/**
 * The print_sign function checks and prints out the sign of a number
 *
 * print_sign() - prints out the sign of numbers
 * @n: member whose sign will be printed
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
