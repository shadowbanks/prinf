#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdint.h>

#define BUFFSIZE 1024
#define TEMP 20

/**
 * struct func - To house format specifier and it's function
 * @spec: the specifier char (c, s, i, d ....)
 * @f: function to handle respective specifier
 */
typedef struct func
{
	char spec;
	int (*f)(char *, va_list);
} func;

int _printf(const char *, ...);
void _puts(char *);
int (*get_func(char specifier))(char *, va_list);
int str_func(char *, va_list);
int char_func(char *, va_list);
int pct_func(char *, va_list);
int _strlen(char *);
int ints_func(char *, va_list);
void rev_string(char *);
int base_conv(char *, long, int);
int b_func(char *, va_list);
int u_func(char *, va_list);
int o_func(char *, va_list);
int x__func(char *, va_list);
int X_func(char *, va_list);
int ptr_func(char *, va_list);
char *_strcpy(char *, char *);
int string_func(char *, va_list);
int revs_string(char *, va_list);
int rot13_func(char *, va_list);


#endif /*MAIN_H*/
