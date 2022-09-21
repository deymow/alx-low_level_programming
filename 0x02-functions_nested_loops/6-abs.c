/**
 * File: 6-abs.c
 * Auth: Ademola E Adeyemi
 */
#include "main.h"
/**
 * _abs() - Computes the absolute value of an integer.
 * @n: The integer to be computed.
 *
 * Return: Absolute value of number
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
