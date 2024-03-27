#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _printf(const char *format, ...);
int printf_char(va_list ap);
int printf_string(va_list ap, int *);
int printf_int(va_list value, int *num);
char *_itoa(int value);

#endif
