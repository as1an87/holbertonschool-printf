Custom Printf Implementation 
================================================

**Specifiers**
---------------
%c - prints a single ASCII character
%s - prints a string of characters
%d - prints a decimal number
%i - prints an integer value
%% - prints a percentage sign

**Table of Contents**
----------------------
1. Usage
2. Example
3. Authors

**Usage**
----------
Function Prototype:

int _printf(const char *format, ...);

To utilize our custom printf function, include the header file "main.h":

#include "main.h"

For accessing the manual page of _printf, use the `man` command in your terminal:

man _printf

Alternatively, you can execute the provided script:

./man_3_printf

**Example**
--------------
#include "main.h"

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
    char *str = "Holberton";
    char c = 'A';
    int num = 101;

    _printf("Character: %c\n", c);
    _printf("String: %s\n", str);
    _printf("Integer: %d\n", num);

    return (0);
}

Output:

Character: A
String: Holberton
Integer: 101

**Authors**
-------------
- Narmin Mammadova (mammadova04)
- Aslan Aslanov (as1an87)

