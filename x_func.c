#include "main.h"

/**
 * x_func - a function to handle "%x" specifier
 * @buffer: location to write the formated output to
 * @ap: var_list. containing the integer to be format
 *
 * Return: length of resulting string
 */

int x_func(char *buffer, va_list ap)
{
	unsigned int digit = va_arg(ap, unsigned int);
	int len = 0;
	int temp;
	char hex_digits[] = "0123456789abcdef";

	if (digit == 0)
	{
		*buffer++ = '0';
		len++;
	}
	else
	{
	temp = digit;
	while (temp)
	{
		temp /= 16;
		len++;
	}

	while (digit)
	{
		buffer[len - 1] = hex_digits[digit % 16];
		digit /= 16;
		len--;
	}
	*buffer = '\0';
	return (len);
}
