#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char d;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');
	for (d = 'A'; d <= 'F'; d++)
		putchar(d);
	return (0);
}
