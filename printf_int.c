#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
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
