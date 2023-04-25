#include "main.h"

/**
 * get_func - find the appropriate function to use
 * @specifier: the "%" format specifier
 *
 * Return: the needed function
 */

int (*get_func(char specifier))(char *, va_list)
{
	int i = 0;
	/*Create an array of struct func, to hold the char and the function*/
	func fmt[] = {
		{'c', char_func},
		{'s', str_func},
		{'%', pct_func},
		{'d', dec_func},
		{'i', ints_func},
		{'b', b_func},
		{'u', u_func},
		{'o', o_func},
		{'x', x_func},
		{'X', X_func},
		{'p', ptr_func},
		{'S', string_func},
		{'r', revs_string},
		{'R', rot13_func},
		{'\0', NULL}
	};

	/*Loop to find the format specifier*/
	for (; fmt[i].spec != '\0'; i++)
	{
		if (specifier == fmt[i].spec)
			/* return the function to handle the specifier*/
			return (fmt[i].f);
	}

	/*If the specifier is not found*/
	return (0);
}
