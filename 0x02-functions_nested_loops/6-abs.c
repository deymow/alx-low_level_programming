/**
 * File: 6-abs.c
 * Auth: Ademola E Adeyemi
 */
#include "main.h"
/**
 * _abs - Function _abs computes the absolute value of an integer.
 * @n: This is the integer to be computed.
 * Return: The absolute value of the integer n is returned
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
