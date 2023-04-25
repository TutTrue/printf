#include "main.h"

/**
 * print_ex_str - ...
 * @ap:va_list
 * Return:length
 */
int print_ex_str(va_list ap)
{
	char *str;
	int i, len = 0;
	int check;

	str = va_arg(ap, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len += 2;
			check = str[i];
			if (check < 16)
			{
				_putchar('0');
				len++;
			}
			print_Hexadecimal(check, &len);
		}
		else
		{
			_putchar(str[i]);
			len++;
		}
	}
	return (len);
}
