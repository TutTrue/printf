#include "main.h"

/**
 * print_Hexadecimal - print hexa
 * @p: len of hex printed
 * @num: decimal
 */
void print_Hexadecimal(unsigned int num, int *p)
{
	unsigned int rem;

	if (num == 0)
		return;
	rem = num % 16;

	print_Hexadecimal(num / 16, p);

	if (rem < 10)
		_putchar('0' + rem);
	else
		_putchar('A' + rem - 10);

	(void) (*p)++;
}

/**
 * print_Hex - print hex
 * @ap: va_list
 * Return: length of hexa
 */
int print_Hex(va_list ap)
{
	unsigned int n;
	int p = 0;

	n = va_arg(ap, unsigned int);
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	print_Hexadecimal(n, &p);
	return (p);
}
