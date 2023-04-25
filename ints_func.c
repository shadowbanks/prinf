#include "main.h"

/**
 * ints_func - a function to handle "%i" and "%d"
 * @buffer: location to write the formated output to
 * @ap: var_list. containing the integer to be format
 *
 * Return: length of resulting string
 */


int ints_func(char *buffer, va_list ap)
{
	return (base_conv(buffer, va_arg(ap, int), 10));
}
