#include "main.h"

/**
 * print_int - print intgers
 * @ap: va_list
 * Return: length of int
 */
int print_int(va_list ap)
{
	int digit, n, ncpy, remainder, i = 0, len = 0, isNeg = 0, reverse = 0;
	char *my_int_min;

	n = va_arg(ap, int);
	if (n == INT_MIN)
	{
		my_int_min = "-2147483648";
		while (*my_int_min)
		{
			_putchar(*my_int_min);
			len++;
			my_int_min++;
		}
		return (len);
	}

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
		isNeg = 1;
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
	if (isNeg)
		len++;
	return (len);
}
