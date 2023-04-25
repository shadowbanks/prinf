#include "main.h"

/**
 * o_func - a function to handle "%o" specifier
 * @buffer: location to write the formated output to
 * @ap: var_list. containing the integer to be format
 * Return: length of resulting string
 */

int o_func(char *buffer, va_list ap)
{
	return (base_conv(buffer, va_arg(ap, unsigned int), 8));
}     
