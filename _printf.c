#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * helper - a helper function
 * @m: char
 * Return: number of characters printed
 */

int helper(char m)
{
	char ch;
	int k = 0;

	ch = '%';
	k += write(1, &ch, 1);
	ch = m;
	k += write(1, &ch, 1);
	return (k);
}
/**
 * _printf - a function that produces output according to a format
 * @format: is a character string
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0, num = 0;
	char ch;
	va_list ap;

	if (!format)
		exit(98);
	va_start(ap, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			if (format[i] == 'c')
				num += printf_char(ap);
			else if (format[i] == 's')
				printf_string(ap, &num);
			else if (format[i] == 'i' || format[i] == 'd')
				printf_int(ap, &num);
			else if (format[i] == '%')
			{
				ch = '%';
				num += write(1, &ch, 1);
			}
			else
				num += helper(format[i]);
		}
		else
		{
			ch = format[i];
			num += write(1, &ch, 1);
		}
	}
	va_end(ap);
	return (num);
}
