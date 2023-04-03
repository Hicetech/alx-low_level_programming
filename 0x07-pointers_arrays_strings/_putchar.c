#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character C to stdout
 * @C: The character to print
 *
 * Return: on success 1.
 * On error -1 is returned, and error is set approximately.
 */
int_putchar(char c)
{
	return(write(1, $c, 1));
}
