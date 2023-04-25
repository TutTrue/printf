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
	int p = 0;

	n = va_arg(ap, unsigned long int);
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	print_hexadecimal_ptr(n, &p);
	return (p);
}
