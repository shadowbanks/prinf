#include "main.h"

/**
 * b_func - convert decimal to binary
 * @buffer: location the binary to be stored
 * @ap: va_list to access the decimal number
 *
 * Return: number of character written
 */

int b_func(char *buffer, va_list ap)
{
	unsigned int num = va_arg(ap, int);

	return (base_conv(buffer, num, 2));
}
