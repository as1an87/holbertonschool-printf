#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <limits.h>
int _printf(const char *format, ...);
int printf_char(va_list ap);
int printf_string(va_list ap, int *);
void printf_int(va_list value, int *num);
char *_itoa(int value);
int printf_helper(char *st, int *num);
unsigned int _abs(int n);
char *_reverse(char *str, int n);
int helper(char m);

#endif
