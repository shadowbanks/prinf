#include "main.h"

/**
 * call_func - check for NULL and call required function
 * @format: format to be handled
 * @buffer: location for the handled argument
 * @ap: argument to be handled
 *
 * Return: space filled in buffer
 */

int call_func(char format, char *buffer, va_list ap)
{
	int (*func_ptr)(char *, va_list), skip;

	func_ptr = get_func(format);

	if (func_ptr == NULL)
	{
		*buffer++ = '%';
		return (-1);
	}

	skip = func_ptr(buffer, ap);

	return (skip);
}
