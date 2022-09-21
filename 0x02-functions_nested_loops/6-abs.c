/**
 * File: 6-abs.c
 * Auth: Ademola E Adeyemi
 */
#include "main.h"
/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer to be computed.
 * Return: n if n is greater than 0 or -n if less than 0.
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
