#include "main.h"

/**
 * _printf - print f function
 * @format: the string will be printed
 * Return: number of digits printed
 */
int _printf(const char *format, ...)
{
	int j, i = 0, len = 0;

	format_t fun[] = {{'c', print_char}, {'s', print_string},
		{'%', print_mod}, {'i', print_int},
		{'d', print_int}
	};

	va_list ap;

	va_start(ap, format);

	if ((!format) || (format[0] == '%' && !format[1]))
		return (-1);

	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format [i + 1] == '\0')
				return (-1);
			j = 0;
			while (j < 5)
			{
				if (format[i + 1] == fun[j].ch)
				{
					len += fun[j].f(ap);
					if (format[i + 1] == 's')
						va_arg(ap, char *);
					else if (format[i + 1] == '%')
					{
						i += 2;
						break;
					}
					else
						va_arg(ap, int);
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
