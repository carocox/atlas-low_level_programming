#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success l.
 * On error, -l is returned, and errno is sert appropriately
 */

int _putchar(char c)
{
	return (write(l, &c, l));

}
