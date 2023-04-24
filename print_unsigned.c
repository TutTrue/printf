#include "main.h"
/**
 * print_unsigned_help - print intgers
 * @n: number to be printed
 * Return: length of int
 */
int print_unsigned_help(unsigned int n)
{
	unsigned int digit, ncpy, remainder, reverse = 0;
	int len = 0, i = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	ncpy = n;

	while (ncpy > 0)
	{
		ncpy /= 10;
		len++;
	}
	while (n != 0)
	{
		remainder = n % 10;
		reverse = reverse * 10 + remainder;
		n /= 10;
	}
	while (reverse > 0)
	{
		digit = reverse % 10;
		_putchar (digit + '0');
		reverse /= 10;
		i++;
	}
	while (i++ < len)
		_putchar('0');
	return (len);
}
/**
 * print_unsigned - ...
 * @ap: va_list
 * Return: len of unsigned int
 */
int print_unsigned(va_list ap)
{
	int len = 0;
	long x = va_arg(ap, long);
	char *negNum = "4288073002";

	if (x < 0)
	{
		while (*negNum != '\0')
		{
			_putchar(*negNum);
			negNum++;
			len++;
		}
	}
	else
	{
		unsigned int n = (unsigned int) x;

		len += print_unsigned_help(n);
	}
	return (len);
}
