#include "main.h"

/**
 * print_binary_help - recrertion fun convert dec to bin
 * @num: number
 * Return:void
 */
void print_binary_help(int num, int *len_ptr)
{
	unsigned int rem;

	if (num == 0)
		return;
	rem = num % 2;
	print_binary_help(num / 2, len_ptr);
	_putchar(rem + '0');
	(void)(*len_ptr)++;
}

/**
 * print_binary - print bin
 * @ap:va_list
 * Return:lenth
 */
int print_binary(va_list ap)
{
	unsigned int num;
	int len = 0;

	num = va_arg(ap, unsigned int);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	print_binary_help(num, &len);
	return (len);
}
