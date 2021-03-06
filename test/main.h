#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct list - c, f
 * @c: character to check
 * @f: Pointer to function, that prts correspondingly
 */


typedef struct list
{
	char c;
	int (*f)(va_list);
} all_cases;
int (*selector(char str))(va_list);
int function_c(va_list rgs_to_print);
int function_s(va_list ap);
int function_d(va_list ap);
int function_i(va_list ap);
int function_por(va_list ap);
int _strlen(char *s);
int _putchar(char c);
int _printf(const char *format, ...);
#endif
