#include "main.h"

/**
 * print_hexadecimal_ptr - print hexa
 * @p: len of hex printed
 * @num: decimal
 */
void print_hexadecimal_ptr(unsigned long int num, int *p)
{
	unsigned long int rem;

	if (num == 0)
		return;
	rem = num % 16;

	print_hexadecimal_ptr(num / 16, p);

	if (rem < 10)
		_putchar('0' + rem);
	else
		_putchar('a' + rem - 10);

	(void) (*p)++;
}

/**
 * print_hex_ptr - print hex
 * @ap: va_list
 * Return: length of hexa
 */
int print_hex_ptr(va_list ap)
{
	unsigned long int n;
	int len = 0;

	n = va_arg(ap, unsigned long int);
	print_hexadecimal_ptr(n, &len);
	return (len);
}
