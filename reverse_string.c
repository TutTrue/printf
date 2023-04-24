#include "main.h"

/**
 * reverse_string - reverse str
 * @ap:va_list
 * Return:len
 */
int reverse_string(va_list ap)
{
	int len, i;
	char *str;
	char *ptr;

	len = 0;
	str = va_arg(ap, char *);
	ptr = str;
	if (!str)
	{
		str = "(null)";
		for (i = 0; i < 6; i++)
			_putchar(str[i]);
		return (0);
	}
	while (*str)
	{
		len++;
		str++;
	}
	for (i = len - 1; i >= 0; i--)
		_putchar(ptr[i]);
	return (len);
}
