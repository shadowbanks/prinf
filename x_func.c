include "main.h"

/**
 * x_func - a function to handle "%x" specifier
 * @buffer: location to write the formated output to
 * @ap: var_list. containing the integer to be format
 *
 * Return: length of resulting string
 */

int x_func(char *buffer, va_list ap)
{
	int digit = va_arg(ap, int), len = 0, temp, remainder;
	char c;

	if (digit == 0)
	{
		*buffer++ = '0';
		len++;
	}
	else if (digit < 0)
	{
		*buffer++ = '-', digit = -digit;
		len++;
	}
	temp = digit;
	while (temp)
	{
		temp /= 16, len++;
	}
	while (digit)
	{
	remainder = digit % 16;
c = (remainder < 10) ? ('0' + remainder) : c = 'a' + (remainder - 10);
		buffer[--len] = c;
		digit /= 16;
	}
	*buffer = '\0';
		return (len);
}
