#include "main.h"

/**
 * print_octal_help - print hexa
 * @num: decimal
 * @p: len of printed octal
 * Return: void
 */
void print_octal_help(unsigned int num, int *p)
{
	unsigned int rem;

	if (num == 0)
		return;
	rem = num % 8;

	print_octal_help(num / 8, p);

	_putchar('0' + rem);
	(void)(*p)++;
}

/**
 * print_octal - print hex
 * @ap: va_list
 * Return: length of hexa
 */
int print_octal(va_list ap)
{
	unsigned int n;
	int p = 0;

	n = va_arg(ap, unsigned int);
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	print_octal_help(n, &p);
	return (p);
}
