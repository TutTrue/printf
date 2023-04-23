#include "main.h"

/**
 * print_int - print intgers
 * @ap: va_list
 * Return: length of int
 */
int print_int(va_list ap)
{
	int i;

	int reverse = 0, remainder, len = 0;
	int flag = 0;

	int n = va_arg(ap, int);

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
		flag = 1;
	}
	while (n != 0)
	{
		remainder = n % 10;
		reverse = reverse * 10 + remainder;
		n /= 10;
		len++;
	}
	for (i = 0; i < len - 1; i++)
	{
		putchar((reverse % 10) + '0');
		reverse /= 10;
	}
	if (flag == 1)
		len++;
	return (len);
}
