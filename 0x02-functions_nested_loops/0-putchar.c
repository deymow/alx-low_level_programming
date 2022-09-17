#include <unistd.h>
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
	char alp[8] = "_putchar";
	int i;
	for (i = 0; i <=8; i++){
	
		_putchar(alp[i]);
	}
	_putchar('\n');
	return (0);
}


int _putchar(char c)
{
	return (write (1, &c, 1));
}
