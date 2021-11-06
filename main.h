#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct list - c, f
 * @c: character to check
 * @f: Pointer to function
 */


struct list
{
	char c;
	int (*f)(va_list);
};


int function_c(va_list);
int function_s(va_list);
int function_por(va_list);
int _strlen(char *s);
int _putchar(char c);
int _printf(const char *format, ...);
#endif
