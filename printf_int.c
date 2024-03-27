#include <stdarg.h>
#include "main.h"
/**
 * printf_int - print int
 * @ptr: pointer to the va_list containing the string
 * @len: pointer to the length counter
 *
 */

int printf_int(va_list ptr, int *len)
{
	unsigned int i = 1;
	int n = va_arg(ptr, int);

	if (n < 0)
	{
		n = -n;
		(*len)++;
		_putchar('-');
	}
	while ((n / i) / 10 != 0)
	{
		i = i * 10;
		(*len)++;
	}
	for (; i != 1; i /= 10)
	{
		_puitchar((number / i) + '0');

		n = n % i;
	}
	(*len)++;
	_putchar((n % 10) + '0');

	return (len);
}

