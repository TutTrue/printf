#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


/**
 * struct format - Struct for format
 * @ch: Struct format
 * @f: The function associated
 */

typedef struct format
{
	char ch;
	int (*f)(va_list);
} format_t;

int reverse_string(va_list ap);
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list ap);
int print_mod(va_list ap);
int print_int(va_list ap);
int print_string(va_list ap);

#endif
