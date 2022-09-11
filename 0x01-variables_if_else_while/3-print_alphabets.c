#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;
	
	/* Prints alphabet from a to z in lowercase */
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	/* Prints alphabet from A to Z in uppercase */
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
