#include "main.h"

/**
 * _printf - print f function
 * @format: the string will be printed
 * Return: number of digits printed
 */
int _printf(const char *format, ...)
{
	int j, i = 0, len = 0;
	va_list ap;

	format_t fun[] = {{'c', print_char}, {'s', print_string},
		{'%', print_mod}, {'i', print_int},
		{'d', print_int}, {'r', reverse_string},
		{'x', print_hex}, {'X', print_Hex},
		{'o', print_octal}, {'u', print_unsigned},
		{'b', print_binary}, {'p', print_address}
	};

	va_start(ap, format);

	if ((!format) || (format[0] == '%' && !format[1]))
		return (-1);

	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			if (format[i + 1] == '+' || format[i + 1] == ' ')
			{
				_putchar(format[i + 1]);
				i++;
				len++;
			}
			else if (format[i + 1] == '#')
			{
				if (format[i + 2] == 'x' || format[i + 2] == 'X' ||
					format[i + 2] == 'o' || format[i + 2] == 'f')
				{
					_putchar('0');
					len++;
					i++;
				}
			}
			j = 0;
			while (j < 12)
			{
				if (format[i + 1] == fun[j].ch)
				{
					len += fun[j].f(ap);
					i += 2;
					break;
				}
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
			len++;
			i++;

		}
	}
	va_end(ap);
	return (len);
}
