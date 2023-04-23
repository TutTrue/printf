#include "main.h"

/**
 * print_char - print input as char
 * @ap:pointer
 * Return:len of char
 */
int print_char(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}
