#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * _reverse - Reverses a string.
 * @str: Given string.
 * @n: Length of string.
 * Return: Reversed string.
 */
char *_reverse(char *str, int n)
{
	int i, temp;

	n--;
	for (i = 0; i <= n; i++, n--)
	{
		temp = str[i];
		str[i] = str[n];
		str[n] = temp;
	}

	return (str);
}
/**
 * _iota - Writes an integer into a string.
 * @value: Int number.
 * Return: Converted value.
 *
 */
char *_itoa(int value)
{
	char buffer[1024];
	unsigned int n;
	int i;
	if (value == INT_MIN)
	{
		n = (unsigned int)INT_MAX + 1;
	}
	else
	{
		n = _abs(value);
	}
	i = 0;
	while (n)
	{
		int r = n % 10;
		buffer[i] = 48 + r;
		i++;
		n = n / 10;
	}
	if (i == 0)
	{
		buffer[i] = '0';
		i++;
	}
	if (value < 0)
	{
		buffer[i] = '-';
		i++;
	}
	buffer[i] = '\0';
	return (_reverse(buffer, i));
}

/**
 * printf_int - print int
 * @ptr: pointer to the va_list containing the string
 * @len: pointer to the length counter
 *
 */

int  printf_int(va_list value, int *len)
{
	char *str = _itoa(va_arg(value, int));
		
	int j = 0;
        while (str[j] != '\0')
        {
                (*len) += write(1, &str[j], 1);
                j++;
        }
        return (*len);
	

}
