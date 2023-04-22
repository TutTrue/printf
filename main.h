#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


/**
 * struct format - Struct for format
 * @specifiers: Struct format
 * @f: The function associated
 */

typedef struct format
{
	char ch;
	int (*f)(va_list);
} format_t;

int _printf(const char *format, ...);
int _putchar(char c);
#endif
