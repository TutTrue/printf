#include "main.h"

int handle_hash(char c, int *i);
/**
 * handle_plus_space - handle plus and spaces after % sign
 * @c: the char after %
 * @num: number that will be printed after
 * Return: len of printed char
 */
int handle_plus_space(char c, int num)
{
	int len = 0;

	if (c == '+')
	{
		int check_isNeg;

		check_isNeg = num > 0 ? 0 : 1;
		if (!check_isNeg)
		{
			_putchar('+');
			len++;
		}
	}
	else
	{
		_putchar(' ');
		len++;
	}
	return (len);
}

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
		{'b', print_binary}, {'p', print_address},
		{'S', print_ex_str}
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
				va_list dest;

				va_copy(dest, ap);
				len += handle_plus_space(format[i + 1], va_arg(dest, int));
				i++;
			}
			else if (format[i + 1] == '#')
			{
				len += handle_hash(format[i + 2], &i);
			}
			j = 0;
			while (j < 13)
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
/**
 * handle_hash - handle after the hash sign
 * @c: the char after # sign
 * @i: pointer to current char of @format
 * Return: len of printed char
 */
int handle_hash(char c, int *i)
{
	int len = 0;

	if (c == 'x' || c == 'X')
	{
		_putchar('0');
		_putchar('x');
		len += 2;
		(*i)++;
	}
	else if (c == 'o')
	{
		_putchar('0');
		len++;
		(*i)++;
	}
	return (len);
}
