#include <unistd.h>

/**
 * _putchar- writes a characters c to stdout
 * %c: the character to ptint 
 *
 * Return: on success 1.
 * on errors, -1 is returned, and errno is set appropriataly
*/

int _putchar(char c);
{
	return (write(1, &c, 1));
}
