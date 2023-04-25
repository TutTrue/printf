#include "main.h"

/**
 * print_address - print address of value
 * @ap:va_list
 * Return:len
 */
int print_address(va_list ap)
{
	void *ptr;
	char *str = "(nil)";
	int len;
	int i;
	va_list dest;

	va_copy(dest, ap);
	ptr = va_arg(ap, void*);
	if (ptr == NULL)
	{
		i = 0;
		while (*str)
		{
			_putchar(*str);
			str++;
			i++;
		}
		va_end(dest);
		return (i);
	}
	_putchar('0');
	_putchar('x');
	len = print_hex_ptr(dest);
	va_end(dest);
	return (len + 2);

}
