#include "main.h"

/**
 * print_hexadecimal - print hexa
 * @p: ;en of hex printed
 * @num: decimal
 */
void print_hexadecimal(unsigned int num, int *p)
{
	unsigned int rem;

	if (num == 0)
		return;
	rem = num % 16;

	print_hexadecimal(num / 16, p);

	if (rem < 10)
		_putchar('0' + rem);
	else
		_putchar('a' + rem - 10);

	(void) (*p)++;
}

/**
 * print_hex - print hex
 * @ap: va_list
 * Return: length of hexa
 */
int print_hex(va_list ap)
{
	unsigned int n;
	int p = 0;

	n = va_arg(ap, unsigned int);
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	print_hexadecimal(n, &p);
	return (p);
}
