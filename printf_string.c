#include "main.h"
#include <unistd.h>
#include <stddef.h>
/**
 * printf_string - prints string.
 * @ap: va_list.
 * @len: length of string.
 * Return: 1
 */

int printf_string(va_list ap, int *len)
{
	int j;
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
		str = "(null)";

	j = 0;
	while (str[j] != '\0')
	{
		(*len) += write(1, &str[j], 1);
		j++;
	}

	return (*len);
}
