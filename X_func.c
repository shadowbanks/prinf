include "main.h"

/**
 * X_func - a function to handle "%X" specifier
 * @buffer: location to write the formated output to
 * @ap: var_list. containing the integer to be format
 *
 * Return: length of resulting string
*/

	int X_func(char *buffer, va_list ap)
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
c = (remainder < 10) ? ('0' + remainder) : c = 'A' + (remainder - 10);	
		buffer[--len] = c;
		digit /= 16;
	}
	*buffer = '\0';
		return (len);
}
