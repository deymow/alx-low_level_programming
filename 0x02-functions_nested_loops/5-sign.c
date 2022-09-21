/**
 * File: 5-sign.c
 * Auth: Ademola E. Adeyemi
 */

#include "main.h"

/**
 * print_sign() - Check Description
 * Description: This function prints out the sign of numbers
 * @n: An input number
 * Return: 1 if number is positive, o if number is 0, or
 * -1 if number is negative
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
