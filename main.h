#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct list - c, f
 * @c: character to check
 * @f: Pointer to function
 */


typedef struct list
{
	char c;
	int (*f)(va_list);
} li;




int _strlen(char *s);
int _printf(const char *format, ...);
#endif
