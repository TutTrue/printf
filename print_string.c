#include "main.h"

/**
 * print_string - print inpuit as string
 * @ap: va_list variable
 * Return:void
 */
int print_string(va_list ap)
{
	char *ch;
	int len;

	ch = va_arg(ap, char *);
	if (ch == NULL)
		ch = "(null)";
	len = 0;
	while (*ch != '\0')
	{
		_putchar((unsigned char) *ch);
		ch++;
		len++;
	}
	return (len);

}
