#include <stdarg.h>
#include "main.h"
/**
 * print_char - print char.
 * @ap: va_list.
 * Return: 1
 */
int print_char(va_list ap)
{
	char ch = (char)va_arg(ap, int);
	return (write(1, &ch, 1));`
}
