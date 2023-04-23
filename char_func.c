#include "main.h"

/**
 * char_func - function to handle "%c"
 * @buffer: location to write the character
 * @ap: va_list to access the character to replace "%c"
 *
 * Return: how many chars written (always 1)
 */

int char_func(char *buffer, va_list ap)
{
	*buffer = va_arg(ap, int);

	return (1);
}
